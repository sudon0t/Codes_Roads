 /**
 * @brief: 8.1_2 指定步数的迷宫问题
 * @link: https://sunnywhy.com/sfbj/8/1/314
 * @date: 2026-02-24 21:54:22
 */

//

#include <iostream>
#include <vector>
using namespace std;

int n, m;
bool getans = false;

void dfs(vector<vector<bool> > v, int x, int y, int step){
    if(getans){
        return;
    }
    if(step==0){
        if(x==n-1 && y==m-1){
            getans = true;
        }
        return;
    }
    v[x][y] = false;
    if(x-1>=0&&y>=0){
        if(v[x-1][y]){
            dfs(v, x-1, y, step-1);
        }
    }
    if((x<=n-1)&&(y-1>=0)){
        if(v[x][y-1]){
            dfs(v, x, y-1, step-1);
        }
    }
    if(x>=0&&y+1<=m-1){
        if(v[x][y+1]){
            dfs(v, x, y+1, step-1);
        }
    }
    if(x+1<=n-1&&y<=m-1){
        if(v[x+1][y]){
            dfs(v, x+1, y, step-1);
        }
    }
}

int main(){
    int k;
    cin >> n >> m >> k;
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
    dfs(v, 0, 0, k);
    if(getans){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
