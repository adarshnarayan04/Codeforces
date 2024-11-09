#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> balloons(N);
    for (int i = 0; i < N; ++i) {
        cin >> balloons[i];
    }

    stack<pair<int, int>> s; // Pair of (number, count)
    int total_balloons = 0;

    for (int i = 0; i < N; ++i) {
        int num = balloons[i];
        if (s.empty() || s.top().first != num) {
            s.push({num, 1});
        } else {
            // Increment the count
            s.top().second += 1;
        }

        total_balloons += 1; // A new balloon is added

        // Check if the count equals the current number
        if (s.top().second == num) {
            // Remove the balloons
            total_balloons -= num; // Subtract the number of balloons being removed
            s.pop();
        }

        // Output the current total number of balloons
        cout << total_balloons << endl;
    }
    return 0;
}