#include<stdio.h> //간단한 코드
int main(){
	int a, b, c, k[10]={};
	
	scanf("%d %d %d", &a, &b, &c);
	int t=a*b*c;
	while(t>=1){
		k[t%10]++;
		t/=10;
	}
	for(int i=0; i<=9; i++) printf("%d\n", k[i]);
}

/* 내가 짠 코드
#include <iostream>
#include <string>

using namespace std;

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int sum = 0;
	cin >> a >> b >> c;
	sum = a * b * c;

	string str = to_string(sum);
	
	int arr[10] = { 0 };

	for (int i = 0; i < str.length(); i++) {
		arr[i] = str[i] - 48;
	}

	for (int j = 0; j < 10; j++) {
		int num = 0;
		for (int p = 0; p < str.length(); p++) {
			if (arr[p] == j) num++;
		}
		cout << num << "\n";
	}
}
*/