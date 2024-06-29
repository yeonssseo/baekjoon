#include <iostream>

using namespace std;

int main() {
	int a = 0;
	int b = 1;
	int num = 0;
	int sum = 0;
	string str;

	cin >> a;

	for (int j = 0; j < a; j++) {
		b = 1;
		num = 0;
		sum = 0;
		cin >> str;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == 'O') {
				num = b;
				b++;
			} else if (str[i] == 'X') {
				num = 0;
				b = 1;
			}
			sum += num;
		}
		cout << sum << "\n";
	}

}