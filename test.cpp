#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        long long arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        sort(arr, arr + n);
        vector<long long> arr1;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
                arr1.push_back(abs(arr[j] - arr[i]));
        }
        sort(arr1.begin(), arr1.end());
        if (k >= 3)
        {
            cout << 0 << endl;
            continue;
        }
        else if (k == 2)
        {
            long long ans = min(arr[0], arr1[0]);
            int l = 0;
            for (int i = 0; i < arr1.size(); ++i)
            {
                while (l + 1 < n and arr[l + 1] <= arr1[i])
                    ++l;
                ans = min(ans, abs(arr1[i] - arr[l]));
                if (l + 1 < n)
                    ans = min(ans, abs(arr[l + 1] - arr1[i]));
            }
            cout << ans << endl;
        }
        else
           cout << min(arr[0], arr1[0]) << endl;
    }
}