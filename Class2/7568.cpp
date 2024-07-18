#include <iostream>
#include <utility>

using namespace std;


int main() {
    int n = 0;
    cin >> n;
    int rank = 1;

    pair<int, int> p[50];

    for (int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (p[i].first < p[j].first && p[i].second < p[j].second) {
                rank++;
            }
        }
        cout << rank << "\n";
        rank = 1;
    }
}