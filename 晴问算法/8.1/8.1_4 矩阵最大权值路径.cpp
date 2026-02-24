 /**
 * @brief: 8.1_4 矩阵最大权值路径
 * @link: https://sunnywhy.com/sfbj/8/1/316
 * @date: 2026-02-24 22:12:08
 */

//

#include <iostream>
#include <vector>
using namespace std;

int n, m;
int ans = -99999;

struct Path{
    vector<short> x;
    vector<short> y;
    int sum = 0;
};

vector<Path> paths;

void dfs(vector<vector<short> > v, vector<vector<bool> > f, int x, int y, Path p){
    p.x.push_back(x);
    p.y.push_back(y);
    p.sum += v[x][y];
    if(x==n-1&&y==m-1){
        if(ans<p.sum){
            ans = p.sum;
            paths.push_back(p);
        }
        return;
    }
    f[x][y] = false;
    if(x-1>=0&&y>=0){
        if(f[x-1][y]){
            dfs(v, f, x-1, y, p);
        }
    }
    if((x<=n-1)&&(y-1>=0)){
        if(f[x][y-1]){
            dfs(v, f, x, y-1, p);
        }
    }
    if(x>=0&&y+1<=m-1){
        if(f[x][y+1]){
            dfs(v, f, x, y+1, p);
        }
    }
    if(x+1<=n-1&&y<=m-1){
        if(f[x+1][y]){
            dfs(v, f, x+1, y, p);
        }
    }
}

int main(){
    cin >> n >> m;
    vector<vector<short> > v(n, vector<short>(m, 0));
    vector<vector<bool> > f(n, vector<bool>(m, true));
    Path p;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            short temp;
            cin >> temp;
            v[i][j] = temp;
        }
    }
    dfs(v, f, 0, 0, p);
    int index = paths.size()-1;
    int len = paths[index].x.size();
    auto it1 = paths[index].x.begin();
    auto it2 = paths[index].y.begin();
    for(;it1 != paths[index].x.end(); it1++, it2++){
        cout << *it1+1 << " " << *it2+1 << endl;
    }
    return 0;
}
