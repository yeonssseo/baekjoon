#include <iostream>
#include <queue>
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

    if (n == 1) {
        cout << 1;
        return 0;
    }

    queue <int> que;
    for (int i = 1; i <= n; i++){
        que.push(i);
    }

    while(true) {
        int sec = 0;
        que.pop();
         if (que.size() == 1) {
            cout << que.front();
            break;
        }
        sec = que.front();
        que.pop();
        que.push(sec);
    }

    return 0;
}