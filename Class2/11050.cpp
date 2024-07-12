#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0, k = 0;
    cin >> n >> k;

    int nMul = 1, kMul = 1,nkMul = 1, sum = 0;

    for (int i = 1; i <= n; i++) {
        nMul *= i;
    }
    for (int i = 1; i <= k; i++) {
        kMul *= i;
    }
    for (int i = 1; i <= n - k; i++) {
        nkMul *= i;
    }

    sum = nMul / (nkMul * kMul);

    cout << sum;
}