#include <iostream>

using namespace std;

int main() {
	int arr[9];
	int maxNumber = 0;
	int num = 0;

	for (int i = 0; i <= 8; i++) {
		cin >> arr[i];
	}

	maxNumber = arr[0];

	for (int j = 0; j <= 8; j++) {
		if (maxNumber < arr[j]) {
			maxNumber = arr[j];
			num = j;
		}
	}

	cout << maxNumber << "\n";
	cout << num + 1;
	return 0;
}