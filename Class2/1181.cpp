#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int cmp(string a, string b) {
    if (a.length() == b.length()) {
        return a < b;
    }
    else {
        return a.length() < b.length();
    }
}

int main() {
    int cnt = 0, com = 0;
    cin >> cnt;
    vector<string> str(cnt);
    vector<string> res(cnt);

    for (int i = 0; i < cnt; i++) {
        cin >> str[i];
    }

    sort(str.begin(), str.end(), cmp);
    str.erase(unique(str.begin(), str.end()), str.end());
    
    for (int i = 0; i < str.size(); i++) {
        cout << str[i] << "\n";
    }

}