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

    for(int i = 0; i < n; i++){
        string line = "";
        getline(cin,line);
        bool result = true;

        stack <char> st;

        for(int i = 0; i < line.length(); i++) {
            if (line[i] == '(') {
                st.push(i);
            }

            if (line[i] == ')'){
                if(st.empty() != true && st.top() == '('){
                    st.pop();
                } else {
                    result = false;
                    break;
                }
            }
        } 

        if (st.empty() == true) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}