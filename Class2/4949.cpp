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

    while(true){
        string input = "";
        stack<char> st;

        getline(cin, input); // 한문장 입력받기
        bool result = true;

        if(input.length() == 1 && input[0] == '.') {
            break;  // .인 경우 종료
        }

        for(int i = 0; i < input.length(); i++){
            if(input[i] == '[' || input[i] == '(') {
                st.push(input[i]);
            }

            if(input[i] == ']') {
                if(!st.empty() && st.top() == '['){
                    st.pop();
                } else {
                    result = false;
                    break;
                }
            } else if (input[i] == ')'){
                if(!st.empty() && st.top() == '('){
                    st.pop();
                } else {
                    result = false;
                    break;
                }
            } // 어차피 짝대로 되어있으니 예를 들어 ] 입력받을시 top에는 [가 있게 됨 모르겠으면 그려봐~
        }
        if(st.empty() && result) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}