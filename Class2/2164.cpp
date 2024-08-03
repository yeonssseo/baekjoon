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

    queue <int> que;
    for (int i = 1; i <= n; i++){
        que.push(i);
    }

    while(true) {
        int sec = 0;
        que.pop();
        sec = que.front();
        que.pop();
        que.push(sec);

        if (que.size() == 1) {
            cout << que.front();
            break;
        }
    }

    return 0;
}