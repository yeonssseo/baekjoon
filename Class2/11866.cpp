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

    queue<int> que;
    
    int n = 0, k = 0;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        que.push(i);
    }

    cout << "<";
    while (!que.empty()) {
        for (int i = 1; i < k; i++){
            que.push(que.front());
            que.pop();
        }
        cout << que.front();
        que.pop();
        if (!que.empty()) {
            cout << ", ";
        }
    }
    cout << ">";

    return 0;
}