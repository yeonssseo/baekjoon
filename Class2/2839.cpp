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

    int n = 0;
    cin >> n;

    if (n == 3) {
        cout << 1;
    }
    else if (n == 4) {
        cout << -1;
    }
    else {
    int cnt = 0;
    while(n >= 0) {
        if (n % 5 == 0) {
            cout << cnt + (n / 5);
            return = 0;
        }
        n = n - 3;
        cnt++;
    }
    cout << -1;
    }

    return 0;
}