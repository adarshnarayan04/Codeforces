#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

void run_codeforces_solution(istringstream& input, ostringstream& output) {
    streambuf* cinbuf = cin.rdbuf();
    streambuf* coutbuf = cout.rdbuf();
    cin.rdbuf(input.rdbuf());
    cout.rdbuf(output.rdbuf());

    // Code from oavikas.cpp
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> onstate;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 1)
            onstate.push_back(i);
    }
    int m;
    cin >> m;
    vector<long long> dist(m);
    for (auto& x : dist) {
        cin >> x;
    }
    vector<long long> cost(n, INT_MAX);
    for (int i = 0; i < onstate.size(); i++) {
        int ind = onstate[i] + 1;
        int ind1 = onstate[i] - 1;
        while (ind < n) {
            if (v[ind] == 0) {
                cost[ind] = min(cost[ind], dist[ind] - dist[ind - 1]);
            } else {
                break;
            }
            ind++;
        }
        while (ind1 >= 0) {
            if (v[ind1] == 0) {
                cost[ind1] = min(cost[ind1], dist[ind1 + 1] - dist[ind1]);
            } else {
                break;
            }
            ind1--;
        }
    }
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            ans += cost[i];
        }
    }
    cout << ans << endl;

    cin.rdbuf(cinbuf);
    cout.rdbuf(coutbuf);
}

TEST_CASE("Test Case 1") {
    istringstream input("5\n1 0 0 1 0\n5\n1 2 3 4 5\n");
    ostringstream output;
    run_codeforces_solution(input, output);
    REQUIRE(output.str() == "2\n");
}

TEST_CASE("Test Case 2") {
    istringstream input("3\n1 0 1\n3\n1 2 3\n");
    ostringstream output;
    run_codeforces_solution(input, output);
    REQUIRE(output.str() == "1\n");
}

TEST_CASE("Test Case 3") {
    istringstream input("4\n0 0 0 0\n4\n1 2 3 4\n");
    ostringstream output;
    run_codeforces_solution(input, output);
    REQUIRE(output.str() == "8589934592\n"); // INT_MAX * 4
}

TEST_CASE("Test Case 4") {
    istringstream input("6\n1 0 0 0 0 1\n6\n1 2 3 4 5 6\n");
    ostringstream output;
    run_codeforces_solution(input, output);
    REQUIRE(output.str() == "4\n");
}