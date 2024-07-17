#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 0, n = 0;
    cin >> cnt;
    vector <int> v(cnt);

    for (int i = 0; i < cnt; i++) {
        cin >> n;
        v.push_back(n);
    }

    sort(v.rbegin(), v.rend());
}