#include <iostream>
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

    int n = 0, m = 0;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    cin >> m;
    vector <int> ch(m);
    for (int i = 0; i < m; i++){
        cin >> ch[i];
    }

    for (int i = 0; i < m; i++) {
        int num = 0;
        for (int j = 0; j < n; j++) {
            if (ch[i] == v[j]) {
                cout << 1 << endl;
                num = 1;
                break;
            }
        }
        if (num == 0) cout << 0 << endl;
    }

    return 0;   
}