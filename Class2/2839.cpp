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
    while(true) {
        if (n % 5 == 0) {
            cout << cnt + (n / 5);
            break;
        }
        n = n - 3;
        cnt++;
    }
    }

    return 0;
}