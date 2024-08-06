#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define endl '\n'
using namespace std;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    Init();

    int n = 0;
    cin >> n;

    vector <int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int min = round(n * 0.15);

    v.erase(v.begin(), v.begin() + min);
    v.erase(v.end() - min, v.end());

    double sum = 0;
    for (int i = 0; i < v.size(); i++){
        sum += v[i];
    }

    if(v.empty()) {
        cout << 0;
    } else {
        cout << round(sum / (double)v.size());
    }
    return 0;
}