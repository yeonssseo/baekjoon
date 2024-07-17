#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int num = 0, cnt = 0; 
    cin >> num;

    while(num != 0) {
        if (num % 125 == 0) cnt += 3;
        else if (num % 25 == 0) cnt += 2;
        else if (num % 5 == 0) cnt += 1;

        num--;
    }
    cout << cnt;
    return 0;
}




//내 코드 : 시간이 너무 오래걸림
/*
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int num = 0, sum = 1, cnt = 0;
    cin >> num;


    for (int i = 0; i < num; i++) {
        sum *= num;
    }

    vector<int> v;

    while (sum != 0) {
        v.push_back(sum % 10);
        sum /= 10;
    }

    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 0) {
            cnt++;
        }
        else if(v[i] != 0) {
            break;
        }
    }

    cout << cnt;
}
*/