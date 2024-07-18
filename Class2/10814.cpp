#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

bool compare (pair<int, string> a, pair<int, string> b) {
    if (a.first > b.first) {
        a < b;
    }
    else if (a.first == b.first) {
        a < b;
    }
}

int main() {
    int n = 0;
    cin >> n;

    vector<pair<int, string>> v;

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
}