#include <iostream>
#include <algorithm>
#define endl '\n'
using namespace std;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// upper_bound, lower_bound를 이용한 풀이방법
int main()
{
    Init();

    int arr[500002];

    int n = 0, m = 0, card = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> card;
        arr[i] = card;
    }
    sort(arr, arr + n);

    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> card;
        cout << upper_bound(arr, arr + n, card) - lower_bound(arr, arr + n, card) << " ";
    }

    return 0;
}