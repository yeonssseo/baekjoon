#include <iostream>

using namespace std;

int main() {
    int num = 0, sum = 0, j = 1, k = 1;

    cin >> num;

    while (true){
        if (num == 1) {
            sum = 1;
            break;
        }
        else if (num <= 6 * k + 1) {
            sum = j + 1;
            break;
        }
        else {
            j++;
            k = k + j;
        }
    }

    cout << sum;
}