#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool findSign(const vector <char> &vec, char a){
    return find(vec.begin(), vec.end(), a) != vec.end();
}

int main()
{
    Init();

    vector <char> ch;

    char input;
        while(cin >> input && input != '.'){
        if (input == '(' || input == ')' || input == '[' || input ==']'){
            ch.push_back(input);
        }
    }

    int si1 = 0, si2 = 0, si3 = 0, si4 = 0;
    for(int i = 0; i < ch.size(); i++){
        if(findSign(ch, '('))si1++;
        if(findSign(ch, ')'))si2++;
        if(findSign(ch, '['))si3++;
        if(findSign(ch, ']'))si4++;
    }

    if(si1 == si2 && si3 == si4) {
        cout << "yes" << endl;
    }
    else cout << "no" << endl;

    for (int i = 0; i < ch.size(); i++) {
        cout << ch[i];
    }


    return 0;
}