#include <iostream>
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

    int t = 0;
    cin >> t;
    int dp[12];

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for(int i = 4; i <= t; i++){
        dp[i] = dp[i - 1] +  dp[i - 2] + dp[i - 3];
    }

    for(int i = 0; i < t; i++){
        int num = 0;
        cin >> num;
        cout << dp[num] << endl;
    }

    return 0;
}