#include <iostream>
using namespace std;

int main() {
	int num = 0, rem = 0;
	cin >> num;
	int arr[100];

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	
	for (int i = 0; i < num; i++) {
  		int ch = 0;
		if (arr[i] == 1) {
			ch = 1;
		}
		for (int j = 2; j < arr[i]; j++) {
			if (arr[i] % j == 0) {
				ch = 1;
				break;
			}
		}
		if (ch != 1) rem++;
	}

	cout << rem;
}