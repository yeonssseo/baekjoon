#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    cin >> n;

    vector <vector<int>> v(n, vector<int>(2));

    for (int i = 0; i < n; i++) {
        int a = 0, b = 0;
        cin >> a >> b;
        v.push_back({a, b});
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cout << v[i][2];
        }
    }
    
}