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

    vector <char> ch;

    char input;
    while(cin >> input && input != '.'){
        ch.push_back(input);
    }

    for (int i = 0; i < ch.size(); i++) {
        cout << ch[i];
    }

    return 0;
}