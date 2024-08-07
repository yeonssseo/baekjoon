#include <iostream>
#include <stack>
#include <string>
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

    while(n--){
        string line;
        cin >> line;

        stack <char> st;

        for(int i = 0; i < line.length(); i++) {
            if (st.empty()) {
                st.push(line[i]);
            } else {
                if(line[i] == ')' && st.top() == '('){
                    st.pop();
                } else {
                    st.push(line[i]);
                }
            }
        } 

        if (st.empty()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}