#include <iostream>
#define endl '\n'
using namespace std;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int arr[100001];
int s;

void push(int a){
    arr[s] = a;
    s++;
}

int pop(){
    if(s == 0) return -1;
    else {
        int t = arr[s - 1];
        s--;
        return t;
    }
}

int size(){
    return s;
}

int top(){
    if(s == 0) return -1;
    return arr[s - 1];
}

int empty(){
    if (s == 0) return 1;
    else return 0;
}

int main()
{
    Init();

    int n = 0;
    cin >> n;

    while(n--){
        string str;
        cin >> str;
        if (str == "push"){
            int n = 0;
            cin >> n;
            push(n);
        }
        if(str == "top") {
            cout << top() << endl;
        }
        if(str == "size"){
            cout << size() << endl;
        }
        if(str == "empty"){
            cout << empty() << endl;
        }
        if(str == "pop"){
            cout << pop() << endl;
        }
    }


    return 0;
}