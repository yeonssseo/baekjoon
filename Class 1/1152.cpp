#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	int count = 1;
	
	getline(cin, str);

	if (str.length() == 1 && str[0] == ' ') {
		cout << 0;
		return 0;
	}
	
	for (int i = 1; i < str.length() - 1; i++) {
		if (str[i] == ' ') {
			count++;
		}
	}

	cout << count;

}