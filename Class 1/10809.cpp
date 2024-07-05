#include <iostream>
#include <string>
using namespace std;

int main() {
	int n = 0, cnt[27] = { 0 };
	string str;
	cin >> str;
	for (int i = 0; i < 26; i++) cnt[i] = -1;
	for (int i = 0; i < str.length(); i++) {
		if (cnt[str[i] - '0' - 49] != -1) continue; //- '0' - 49를 - 97로 바꿔도 됨
		cnt[str[i] - '0' - 49] = i;
	}
	for (int i = 0; i < 26; i++) cout << cnt[i] << " ";
}

/*
#include <iostream>

using namespace std;

int main() {
	string str;
	int flag = 0;
	int arr[26] = { 0 };

	cin >> str;

	for (int j = 0; j <= 25; j++) {
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == j + 97) {
				if (arr[j] != 1) {
					cout << i << ' ';
					flag = 1;
				}
				arr[j] = 1;
			}
		}
		if (flag == 0) cout << -1 << ' ';
		flag = 0;
	}
	
}
*/