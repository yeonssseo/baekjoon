#include <iostream>

using namespace std;

int main() {
	int a = 0;
	cin >> a;

	for (int i = 1; i <= a; i++) {
		for (int j = a-1; j > i-1; j--) {
			cout << " ";
		}
		for (int p = 1; p <= i; p++) {
			cout << "*";
		}
		cout << "\n";
	}
}
