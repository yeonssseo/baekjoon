#include <iostream>
#include <queue>
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

    int t = 0;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        int cnt = 0;
        
        queue<pair<int, int>> q; //<몇번째, 중요도>
        priority_queue<int> pq; //중요도 순서대로 나열

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            
            q.push({i, x}); //<몇번째, 중요도>
            pq.push(x); //중요도 나열
        }

        while(!q.empty()){
            int idx = q.front().first; // 몇번째
            int priority = q.front().second; // 중요도
            q.pop(); //일단 제거

            if(pq.top() == priority){ //현재 중요도 우선순위와 차례가 같다면
                pq.pop(); //중요도 우선순위 제거
                cnt++; //우선순위 횟수 추가

                if(idx = m){ //찾는 중요도 우선순위 번째와 같다면
                    cout << cnt << endl; // 횟수 출력
                    break;
                }
            }
            else{
                q.push({ idx, priority }); //순서가 아니라면 뒤에 추가
            }
        }
    }
    

    return 0;
}