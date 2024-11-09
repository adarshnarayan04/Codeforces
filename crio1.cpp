#include <iostream>
using namespace std;

int main() {
    int N, NB, G, L, R;
    cin >> N >> NB >> G >> L >> R;

    int age[6] = {0}; // Since L <= 5, we can fix the size to 6 (indices 0 to 5)
    age[1] = NB;      // Initial fish are at age 1

    for (int year = 1; year <= N; ++year) {
        // Calculate newborns
        int reproducingFish = 0;
        for (int a = 1; a <= R; ++a) {
            reproducingFish += age[a];
        }
        int newborns = reproducingFish * G;

        // Age the fish
        for (int a = L; a >= 2; --a) {
            age[a] = age[a - 1];
        }
        age[1] = newborns; // Add newborns to age 1
    }

    // Calculate total fish population
    int totalFish = 0;
    for (int a = 1; a <= L; ++a) {
        totalFish += age[a];
    }

    cout << totalFish << endl;
    return 0;
}