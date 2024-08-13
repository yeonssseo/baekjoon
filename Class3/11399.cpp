#include <iostream>
#include <algorithm>
#include <vector>
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

    vector <int> vec;
    for(int i = 0; i < n; i++){
        int num = 0;
        cin >> num;
        vec.push_back(num);
    }

    sort(vec.begin(), vec.end());

    int tem_sum = 0, fin_sum = 0;
    for (int i = 0; i < n; i++){
        tem_sum += vec[i];
        fin_sum += tem_sum;
    }

    cout << tem_sum;

    return 0;
}