#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
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
    vector <int> v;
    int sum = 0;
    int index = 0;
    int max = 0;
    int cnt[8001] = {0, };

    for(int i = 0; i < n; i++){
        int num = 0;
        cin >> num;
        v.push_back(num);
        sum += num;

        if(num <= 0) index = -num;
        else index = 4000 + num;

        cnt[index]++;

        if(cnt[index] > max) max = cnt[index];
    }
    sort(v.begin(), v.end());

    int mean = round((float)sum / n);
    if(mean == -0) mean == 0;
    cout << mean << endl; //산술평균

    int mid = 0;
    if(n ==1){
        mid = v[0];
    } else{    
    mid = v[n / 2];
    }
    cout << mid << endl; // 중앙값

    bool flag = false;
    int result = 0;
    for(int i = -4000; i < 4001; i++){
        if (i <= 0) index = -1;
        else index = 4000 + i;

        if(cnt[index] == max) {
            result = i;

            if (flag){
                break;
            }
            flag = true;
        }
    }

    cout << result << endl; //최빈값

    cout << v[v.size() - 1] - v[0] << endl; //범위

    return 0;
}