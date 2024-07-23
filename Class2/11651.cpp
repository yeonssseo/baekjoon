#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
struct coordinate {
    int x;
    int y;
};

bool compare(const coordinate& a, const coordinate& b){
    if (a.y == b.y) {
        return a.x < b.x;
    }
    return a.y < b.y;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    cin >> n;

    vector<coordinate> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].x >> v[i].y;
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << v[i].x << " " << v[i]. y << "\n";
    }
}