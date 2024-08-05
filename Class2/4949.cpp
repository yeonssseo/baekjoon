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

    string line;

    while(getline(cin, line)){
        if(line == ".") break;

        vector <char> ch;

        for(int i = 0; i < line.size(); i++){
            char input = line[i];
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
        }

    return 0;
}