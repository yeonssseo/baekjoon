#include <iostream>
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

    int dp[1000001];

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;

    for (int i = 4; i <= n; i++) {
        if (i % 3 == 0 && i % 2 == 0) {
            dp[i] = min(dp[i - 1], (min(dp[i / 3], dp[i / 2])));
        }
        else if (i % 3 == 0) {
            dp[i] = min(dp[i - 1], dp[i / 3]);
        }
        else if(i % 2 == 0){
            dp[i] = min(dp[i - 1], dp[i / 2]);
        }
        else{
            dp[i] = dp[i - 1];
        }

        dp[i]++;
    }

    cout << dp[n] << endl;

    return 0;
}