#include <iostream>

using namespace std;

int rem[42];

int main() {
	int a;
	int num = 0;

	for (int i = 0; i < 10; i++) {
		cin >> a;
		rem[a % 42] = 1;
	}

	for (int i = 0; i < 42; i++) {
		if (rem[i] > 0) {
			num++;
		}
	}

	cout << num;

}