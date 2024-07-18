#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(const pair<int, string>& a, const pair<int, string>& b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main() {
    int n = 0;
    cin >> n;

    vector<pair<int, string>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
}