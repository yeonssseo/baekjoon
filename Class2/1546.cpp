#include <iostream>

using namespace std;

int main() {
    double num = 0, maxNum = 0;
    double sum = 0, result = 0;
    int arr[1000];

    cin >> num;
    cout.precision(12);
    cout << fixed;
    maxNum = arr[0];
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }

    for (int i = 0; i < num; i++) {
        sum += (arr[i] / maxNum) * 100;
    }

    result = sum / num;
    cout << result;
}