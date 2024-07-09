#include <iostream>
using namespace std;

int main() {
	int n = 0, m = 0;
	int arr[100];
	int maxNum = 0, sum = 0;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i]; 
	}

	for (int i = 0; i < n - 2; i++) {
		for (int j = 0; j < n - 1; j++) {
			for (int k = 0; k < n; k++) {
				if (i != j && j != k && i != k) {
					sum = arr[i] + arr[j] + arr[k];
				}
				if (sum <= m && sum > maxNum) {
					maxNum = sum;
				}
			}
		}
	}

	cout << maxNum;

}