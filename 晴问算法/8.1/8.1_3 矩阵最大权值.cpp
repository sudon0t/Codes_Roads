 /**
 * @brief: 8.1_3 矩阵最大权值
 * @link: https://sunnywhy.com/sfbj/8/1/315
 * @date: 2026-02-24 21:59:40
 */

//

#include <iostream>
#include <vector>
using namespace std;

int n, m;
int ans = -99999;

void dfs(vector<vector<short> > v, vector<vector<bool> > f, int x, int y, int sum){
    sum += v[x][y];
    if(x==n-1&&y==m-1){
        if(ans<sum){ans = sum;}
        return;
    }
    f[x][y] = false;
    if(x-1>=0&&y>=0){
        if(f[x-1][y]){
            dfs(v, f, x-1, y, sum);
        }
    }
    if((x<=n-1)&&(y-1>=0)){
        if(f[x][y-1]){
            dfs(v, f, x, y-1, sum);
        }
    }
    if(x>=0&&y+1<=m-1){
        if(f[x][y+1]){
            dfs(v, f, x, y+1, sum);
        }
    }
    if(x+1<=n-1&&y<=m-1){
        if(f[x+1][y]){
            dfs(v, f, x+1, y, sum);
        }
    }
}

int main(){
    cin >> n >> m;
    vector<vector<short> > v(n, vector<short>(m, 0));
    vector<vector<bool> > f(n, vector<bool>(m, true));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            short temp;
            cin >> temp;
            v[i][j] = temp;
        }
    }
    dfs(v, f, 0, 0, 0);
    cout << ans << endl;
    return 0;
}
