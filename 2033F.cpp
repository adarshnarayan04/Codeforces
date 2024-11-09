#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

// Function to compute Pisano period for modulus k
ll computePisanoPeriod(ll k) {
    ll prev = 0, curr = 1;
    for (ll i = 0; i < k * k; ++i) {
        ll temp = (prev + curr) % k;
        prev = curr;
        curr = temp;
        if (prev == 0 && curr == 1) {
            return i + 1;
        }
    }
    return k * k; // Should not reach here for small k
}

// Function to compute Zero Pisano Period for modulus k
ll computeZeroPisanoPeriod(ll k) {
    ll prev = 0, curr = 1;
    ll index = 1;
    while (true) {
        ll temp = (prev + curr) % k;
        prev = curr;
        curr = temp;
        index++;
        if (curr % k == 0) {
            return index;
        }
        if (index > 6 * k) {
            // If zero not found within expected period, use Pisano period
            return computePisanoPeriod(k);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    vector<pair<ll, ll>> testCases(t);
    set<ll> kValues;

    for (int i = 0; i < t; ++i) {
        ll n, k;
        cin >> n >> k;
        testCases[i] = make_pair(n, k);
        kValues.insert(k);
    }

    unordered_map<ll, ll> zeroPeriods;

    // Precompute Zero Pisano Periods for all unique k
    for (set<ll>::iterator it = kValues.begin(); it != kValues.end(); ++it) {
        ll k = *it;
        // Handle special case when k == 1
        if (k == 1) {
            zeroPeriods[k] = 1;
            continue;
        }
        ll prev = 0, curr = 1;
        ll index = 1;
        ll period = 0;

        while (true) {
            ll temp = (prev + curr) % k;
            prev = curr;
            curr = temp;
            index++;
            if (curr % k == 0) {
                period = index;
                break;
            }
            // Safe limit to prevent infinite loops
            if (index > 6 * k) {
                // If zero not found within expected period, use Pisano period
                period = computePisanoPeriod(k);
                break;
            }
        }
        zeroPeriods[k] = period;
    }

    // Answer queries
    for (int i = 0; i < t; ++i) {
        ll n = testCases[i].first;
        ll k = testCases[i].second;
        ll zPeriod = zeroPeriods[k];
        ll result = (n % MOD) * (zPeriod % MOD) % MOD;
        cout << result << "\n";
    }

    return 0;
}