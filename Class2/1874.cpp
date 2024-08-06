#include <iostream>
#include <stack>
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

    stack<int> s;
    vector<char> result;
    int cnt = 1;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        while(cnt <= x) {
            s.push(cnt);
            cnt += 1;
            result.push_back( '+' );
        }

        if(s.top() == x) {
            s.pop();
            result.push_back( '-');
        }
        else {
            cout << "NO";
            return 0;
        }
    }

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }

    return 0;
}