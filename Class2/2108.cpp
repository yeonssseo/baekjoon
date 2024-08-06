#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    Init();

	int n;
	cin >> n;
	
	vector<int> v;
	double sum = 0;
    
	int a[8001] = {0,};
	int maxCnt = 0;
	int max = 0;
    
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
        
		v.push_back(tmp);
		sum += tmp;
        
		a[tmp+4000]++;
	}
    
	sort(v.begin(), v.end());
	
	int flag = 0;
	for(int i=0; i<8001; i++){
		if(a[i] > maxCnt){
			maxCnt = a[i];
			max = i - 4000;
		}
	}
	
	int mode;
	int modecnt = 0;

	for(int i=0; i<8001; i++){
		if(a[i] == maxCnt && modecnt==0){
			modecnt++;
		}
		else if(modecnt && a[i] == maxCnt){
			flag=1;
			mode = i - 4000;
			break;
		}
	}
	
	int flag2 = 0;
	if(!flag){
		mode = max;
	}
	
	
	if(round(sum/n)== -0){
		cout << 0 << '\n';
	}
	else{
		cout << round(sum/n) << '\n';
	}	
		
	cout << v[n/2] << '\n';
	cout << mode << '\n';
	cout << v[n-1] - v[0];
	
	
	
    return 0;
}