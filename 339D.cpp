#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debugging.h"
#else
# define debug(x...)
#endif

#define int long long
#define ll long long

#define w(t)   int testcase; cin>>testcase; for (int tc = 1; tc <= testcase; ++tc)
#define vin(v,n) for(int i = 0; i < n; ++i){int x;cin>>x;v.push_back(x);}
//vin(vector name,number of times you want to take  input)
#define in(var) int var;cin>>var;
#define op(var) cout<<var<<"\n";
#define FastIO() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define eps 1e-8;

#define nline cout <<"\n"
#define nl "\n"


int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
                         
const unsigned int M = 1e9+7;
const int N=1e5+10;
const int INF=1e18 +10;
double acc = 1e-6;
const long double pi = 3.14159265358979323846;

/*----------------------code start here -----------------------------*/
/* Segment Tree Lazy Propogation Generic Code */
/*
decalre: SegTree<Node,Update> seg(n);
- merge(x, identityElement) = x
- identityTransformation.combine(x) = x --> for combine operation of update , if update value is identitfy transformation then it give back other update value
ex: update.combine(otherupdate)=otherupdate if update.v=identitytrasformtion  , in addition case it is 0 
*/
class Node{
public:
    int v = 0; //We can use more variables depending on what all info we need !
    // 1. this is identitiyElement - default node value which will not impact answer on taken
    Node(){}
    Node(int val){
        v = val; // 2. Node constructor will change depending on, what we need to initialize
    }
    
    void merge1(const Node& l, const Node& r){ // v is each nodes data, while l & r are children
        v = l.v | r.v; //3. Merge function (merge logic can change)
    }
    void merge2(const Node& l, const Node& r){ // v is each nodes data, while l & r are children
        v = l.v ^ r.v; //3. Merge function (merge logic can change)
    }
};

class Update{
public:
    int v = 0;
    // 4. this is identity Transformation - default update value assigned before or after the operation
    Update(){};
    Update(int val){
        v = val; // 5. Update constructor initialization
    }
    
    void combine(const Update& otherUpdate, const int& tl, const int& tr){ //combing the update, to give to chidren in future
        v += otherUpdate.v; // 6. OtherUpdate is the newest update ['=' or '+=' depends on 'assign/set' vs 'add']
    }
    
    void apply(Node& node, const int& tl, const int& tr) const{
        node.v = v; // 7. applying the update received on the node
    }	
};

template <typename node, typename update>
class SegTree{
public:
    int len;
    // t is the segment Tree
    vector<node> t;
    vector<update> unpropUpd; // the actual val of un-propogated updates to be processed
    vector<bool> isLazy; //tells if a certain node is storing un-propogated updates or not
    node identityElement;
    update identityTransformation; 
    
    SegTree(){}
    SegTree(int l){
        len = l;
        t.resize(4 * len);
        isLazy.resize(4 * len);
        unpropUpd.resize(4 * len);
        identityElement = node();
        identityTransformation = update();
    }
    
    // asking v, to remember that he has 'val' update for his range
    void apply(const int& v,const int& tl,const int& tr,const update& upd){ // [tl, tr] is node range
        if(tl != tr){ // leaf nodes can't be lazy, as they have no-one to propogate to
            isLazy[v] = true;
            unpropUpd[v].combine(upd, tl, tr); //stacking up the unpropogaed value, which i'll propogate down
        }
        upd.apply(t[v], tl, tr); // this "= shows assign update", "+= shows range add update" 
    }
    
    // assigning the value whatsoever we had on 'v' to its children ('2*v' & '2*v+1')
    void pushDown(const int& v,const int& tl,const int& tr){
        if(!isLazy[v]) return; // if not lazy then no push-down required
        isLazy[v] = false; //no more lazy
        int tm = (tl + tr)/2;
        apply(2*v, tl, tm, unpropUpd[v]); // propogates to left child
        apply(2*v+1, tm+1, tr, unpropUpd[v]); // propogates to right child
        unpropUpd[v] = identityTransformation; // identity-transformation -- updated the children(job done) --> so made the value as identity transformation , as if another combine come then it give the other value 
    }
    
    // Build Segment Tree -- build(a, 1, 0, len-1); 
    template<typename T>
    void build(const T& a,const int& v,const int& tl,const int& tr){
        if(tl == tr){
            t[v] = a[tl];
            return;
        }
        int tm = (tl + tr)/2;
        build(a, 2*v, tl, tm);
        build(a, 2*v+1, tm+1, tr);
        int dif=tr-tl+1;
        debug(tr,tl)
        int power=log2(dif);
        if(power&1)
        t[v].merge1(t[2*v], t[2*v+1]);
        else
        t[v].merge2(t[2*v], t[2*v+1]);
    }
    
    // Query input question is = [l, r] included -- query(1, 0, len-1, l, r)
    node query(const int& v,const int& tl,const int& tr,const int& l,const int& r){
        if(tl > r || tr < l) return identityElement; // no overlap
        if(l <= tl && tr <= r) return t[v]; //Full overlap
        
        // Partial Overlap
        pushDown(v, tl, tr); //we remove the lazy tag before going down, so children have correct info
        int tm = (tl + tr)/2;
        node leftAns = query(2*v, tl, tm, l, r);
        node rightAns = query(2*v+1, tm+1, tr, l, r);
        node ans;
        //no problem as we always ask for full range--> so full overlap code will run
        ans.merge1(leftAns, rightAns);
        return ans;
    }
    
    // Update at index id of nums to a value val (assign/override/set) -- update(1, 0, len-1, l, r, val) 
    void rangeUpdate(const int& v,const int& tl,const int& tr,const int& l,const int& r, const update& upd){
        // reached leaf node
        if(l <= tl && tr <= r){ // full overlap -- apply update and return back
            apply(v, tl, tr, upd); 
            return;
        }
        if(tl > r || tr < l) return; // no overlap
        
        // Partial Overlap
        pushDown(v, tl, tr);
        int tm = (tl + tr)/2;
        rangeUpdate(2*v, tl, tm, l, r, upd);
        rangeUpdate(2*v+1, tm+1, tr, l, r, upd);
        int dif=tr-tl+1;
        
        int power=log2(dif);
        if(power&1)
        t[v].merge1(t[2*v], t[2*v+1]);
        else
        t[v].merge2(t[2*v], t[2*v+1]);
    }
    
    //over-ridden functions
    template<typename T>
    void build(const T& a){
        build(a, 1, 0, len-1);
    }
    
    node query(const int& l,const int& r){
        return query(1, 0, len-1, l, r);
    }
    
    void rangeUpdate(const int& l,const int& r, const update& upd){
        rangeUpdate(1, 0, len-1, l, r, upd);
    }
};
void themagician(){
    int n,q;
    cin>>n>>q;
    n=1<<n;
    vector<int> v(n);
    for(auto &x:v) cin>>x;
    debug(v)
    SegTree<Node,Update> seg(n);
    seg.build(v);

    while(q--)
    {
        int i,val;
        cin>>i>>val;
        i--;
        seg.rangeUpdate(i,i,Update(val));
        cout<<seg.query(0,n-1).v<<endl;
    }


    
}



signed main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
  FastIO();
  

  //debug(tc)
    themagician();
  
  
return 0;
}

