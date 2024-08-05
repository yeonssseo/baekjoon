#include <iostream>
#include <stack>
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

    int k = 0;
    cin >> k;
    stack <int> st;

    for(int i = 0; i < k; i++) {
        int a = 0;
        cin >> a;
        if (a == 0) {
            st.pop();
        } else {
            st.push(a);
        }
    }

    int sum = 0;
    for (int i = 0; i < st.size(); i++) {
        sum += st.top();
        cout << st.top();
        st.pop();
    }

    cout << sum;

    return 0;
}