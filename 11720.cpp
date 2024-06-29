#include <iostream>

using namespace std;

int main() {
	int num = 0;
	int sum = 0;
	char arr[100];

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}


	for (int i = 0; i < num; i++) {
		sum += (int)arr[i] - '0';
	}

	cout << sum;
}
