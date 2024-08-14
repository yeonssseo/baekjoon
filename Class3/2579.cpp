#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int n, m, v;
vector <int> graph[101];
bool dfs_visit[1001];
vector<int> dfs_ans;

void dfs(int start)
{
    dfs_visit[start] = true;
    dfs_ans.push_back(start);

    for(int i = 0; i < graph[start].size(); i++) {
        if(!dfs_visit[graph[start][i]]){
            dfs(graph[start][i]);
        }
    }
}

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    Init();

    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b; //연결되어있는 애들
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i = 1; i <= n; i++){
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(1);

    return 0;
}