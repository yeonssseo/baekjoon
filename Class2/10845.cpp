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
int top = 0;
int bottom = 0;

bool isempty(){
    return top == bottom;
}

void push(int a){
    arr[bottom] = a;
    bottom++;
}

int pop(){
    if(isempty()){
        return -1;
    }
    int t = 0;
    t = arr[top];
    top++;
    return t;
}

int size(){
    return bottom - top;
}

int front(){
    if(isempty()) return -1;
    return arr[top];
}

int back(){
    if(isempty()) return -1;
    return arr[bottom - 1];
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
            int k = 0;
            cin >> k;
            push(k);
        }
        if (str == "front"){
            cout << front() << endl;
        }
        if (str == "back"){
            cout << back() << endl;
        }
        if (str == "size"){
            cout << size() << endl;
        }
        if(str == "empty"){
            cout << isempty() << endl;
        }
        if (str == "pop"){
            cout << pop() << endl;
        }
    }

    return 0;
}