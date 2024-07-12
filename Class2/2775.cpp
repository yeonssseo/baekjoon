#include <iostream>

using namespace std;

int main() {
    int test = 0;
    int x = 0, y = 0, z = 0;
    int arr[15][15] = { 0, };

    for (int i = 0; i < 15; i++) {
        arr[0][i] = i; //0층의 i호는 모두 i
    }
    for (int i = 1; i < 15; i++) {
        arr[i][0] = 0; //i층의 0호는 모두 없음
    }
    //층 호수 모두 채워주기
    for (int i = 1; i < 15; i++) {
        for (int j = 1; j < 15; j++) {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }
    cin >> test;
    for (int i = 0; i < test; i++) {
        cin >> x >> y;
        cout << arr[x][y] << "\n";
    }
}