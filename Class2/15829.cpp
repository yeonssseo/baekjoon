#include <iostream>

using namespace std;

int main() {
    string str;
    long long num = 0, sec = 1, res = 0;

    cin >> num >> str;

    for (long long i = 0; i < num; i++) {
        sec = 1;
        for (int j = 0; j < i; j++) {
            sec = sec * 31 % 1234567891;
        }
        res += (str[i] - '`') * sec % 1234567891;
    }

    cout << res % 1234567891;
}