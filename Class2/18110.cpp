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

    int min = ceil(n * 15 / 100);

    for (int i = 0; i < min; i++){
        v.erase(v.begin() + i);
    }

    for(int i = min; i > 0; i--){
        v.erase(v.end() - i);
    }
    int sum = 0;
    for (int i = 0; i < v.size(); i++){
        sum += v[i];
    }

    cout << ceil(sum / v.size());
    return 0;
}