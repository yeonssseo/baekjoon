#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long a = 0, b = 0, v = 0;
    long date = 0;

    cin >> a >> b >> v;

    if ((v - a) % (a - b) == 0) date = (v - a) / (a - b) + 1;
    else date = (v - a) / (a - b) + 2;

    cout << date;
}