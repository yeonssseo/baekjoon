#include <iostream>

using namespace std;

int main() {
    int num1 = 0, num2 = 0, i = 2;
    int sumMin = 1, sumMax = 1;

    cin >> num1 >> num2;

    while (true) {
        if (num1 / i == 0 || num2 / i == 0) {
            sumMax *= num1 * num2;
            break;
        }
        if (num1 % i != 0 || num2 % i != 0) {
            i++;
            continue;
        }
        num1 /= i;
        num2 /= i;
        sumMax *= i;
        sumMin *= i;
        i = 2;
    }

    cout << sumMin << "\n" << sumMax;
}