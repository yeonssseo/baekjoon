#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int sum = 0, num = 0, tmp = 0, sum_sum = 0, result = 0;

	cin >> num;
	for (int i = 1; i < num; i++) {
		tmp = i;
		sum = 0;
		while (tmp != 0) {
			sum += tmp % 10;
			tmp /= 10;
		}
		sum_sum = sum + i;
		if (sum_sum == num) {
			result = i;
			break;
		}
	}

	cout << result;
}