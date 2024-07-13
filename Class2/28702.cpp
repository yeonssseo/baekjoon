#include <iostream>
#include <string>

using namespace std;

bool is_digit(string str) {
    return atoi(str.c_str()) != 0 || str.compare("0") == 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str1, str2, str3;
    int sum = 0;

    cin >> str1 >> str2 >> str3;

    if (is_digit(str1) == 1) { //숫자라면
        sum = stoi(str1) + 3;
    }
    else if (is_digit(str2) == 1) {
        sum = stoi(str2) + 2;
    }
    else if (is_digit(str3) == 1) {
        sum = stoi(str3) + 1;
    }

    if (sum % 3 == 0 && sum % 5 == 0) {
        cout << "FizzBuzz";
    }
    else if (sum % 3 == 0 && sum % 5 != 0) {
        cout << "Fizz";
    }
    else if (sum % 3 != 0 && sum % 5 == 0) {
        cout << "Buzz";
    }
    else if (sum % 3 != 0 && sum % 5 != 0) {
        cout << sum;
    }
}