 /**
 * @brief: 8.1_1 迷宫可行路径数
 * @link: https://sunnywhy.com/sfbj/8/1
 * @date: 2026-02-24 21:20:54
 */

//

#include <iostream>
#include <vector>
using namespace std;

int ans = 0;
int n, m;

void dfs(vector<vector<bool> > v, int x, int y){
    if(x==n-1 && y==m-1){
        ans++;
        return;
    }
    v[x][y] = false;
    if(x-1>=0&&y>=0){
        if(v[x-1][y]){
            dfs(v, x-1, y);
        }
    }
    if((x<=n-1)&&(y-1>=0)){
        if(v[x][y-1]){
            dfs(v, x, y-1);
        }
    }
    if(x>=0&&y+1<=m-1){
        if(v[x][y+1]){
            dfs(v, x, y+1);
        }
    }
    if(x+1<=n-1&&y<=m-1){
        if(v[x+1][y]){
            dfs(v, x+1, y);
        }
    }
}

int main(){
    cin >> n >> m;
    vector<vector<bool> > v(n, vector<bool>(m, true));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            short temp;
            cin >> temp;
            if(temp==1){
                v[i][j] = false;
            }
        }
    }
    dfs(v, 0, 0);
    cout << ans << endl;
    return 0;
}
