#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int num = 0;
	int arr[6];
	int t = 0, p = 0;
	int shi = 0, pen = 0, penRem;


	cin >> num;
	for (int i = 0; i < sizeof (arr) / 4; i++) {
		cin >> arr[i];
	}
	cin >> t >> p;

	for (int i = 0; i < sizeof(arr) / 4; i++) {
		int shirt = 0;
		shirt = arr[i] / t;
		if (arr[i] % t == 0) {
			shi += shirt;
			continue;
		}
		shi += (shirt + 1);
	}

	pen = num / p;
	penRem = num % p;

	cout << shi << "\n" << pen << " " << penRem;
}