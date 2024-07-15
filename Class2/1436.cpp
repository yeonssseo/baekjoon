#include <iostream>
#include <string>

using namespace std;

int main() {
    int num = 0, sum = 0;
    int cnt = 1, base = 666;
    string str;
    cin >> num;

    while (cnt != num) {
        base++;

        str = to_string(base);
        if (str.find("666") != string::npos) {
            cnt++;
        }
    }

    cout << base;
}
