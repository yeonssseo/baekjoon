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

    int zero[41];
    int one[41];

    zero[0] = 1;
    zero[1] = 0;
    one[0] = 0;
    one[1] = 1;

    for(int i = 0; i <= t; i++) {
        int n = 0;
        cin >> n;
        for(int j = 2; j <= n; j++){
            zero[j] = zero[j - 1] + zero[j - 2];
            one[j] = one[j - 1] + one[j - 2];
        }
        cout << zero[n] << one[n] << endl;
    }

    return 0;
}