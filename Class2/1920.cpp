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

int main()
{
    Init();

    int n, m;
    long long listNum, findNum;

    cin >> n;
    vector<int> listv;
    for (int i = 0; i < n; i++) {
        cin >> listNum;
        listv.push_back(listNum);
    }

    sort(listv.begin(), listv.end());

    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> findNum;

        bool isFound = binary_search(listv.begin(), listv.end(), findNum);
        cout << isFound << endl;
    }
    return 0;
}