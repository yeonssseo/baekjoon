#include <iostream>
#include <map>
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
    cin >> n >> m;
    map<string,string> admap;
    string address, pw;

    for (int i = 0; i < n; i++){
        cin >> address >> pw;

        admap[address] = pw;
    }

    for(int i = 0; i < m; i++){
        cin >> address;

        cout << admap[address] <<  endl;
    }

    return 0;
}