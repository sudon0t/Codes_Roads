 /**
 * @brief: 8.2_7 多终点迷宫问题
 * @link: https://sunnywhy.com/sfbj/8/2/324
 * @date: 2026-02-25 15:43:31
 */

//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node{
    int x;
    int y;
    Node(int _x, int _y){
        x = _x;
        y = _y;
    }
};

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<bool> > v(n+1, vector<bool>(m+1, false));
    vector<vector<int> > ans(n+1, vector<int>(m+1, -1));
    queue<Node> q;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            int in;
            cin >> in;
            if(in==0){
                v[i][j] = true;
            }
        }
    }
    Node newnode = Node(1, 1);
    q.push(newnode);
    v[1][1] = false;
    ans[1][1] = 0;
    int step = 0;
    while(!q.empty()){
        step++;
        int num = q.size();
        while(num--){
            Node top = q.front();
            q.pop();
            if(top.x-1>=1){
                if(v[top.x-1][top.y]){
                    v[top.x-1][top.y] = false;
                    ans[top.x-1][top.y] = step;
                    newnode = Node(top.x-1, top.y);
                    q.push(newnode);
                }
            }
            if(top.y-1>=1){
                if(v[top.x][top.y-1]){
                    v[top.x][top.y-1] = false;
                    ans[top.x][top.y-1] = step;
                    newnode = Node(top.x, top.y-1);
                    q.push(newnode);
                }
            }
            if(top.x+1<=n){
                if(v[top.x+1][top.y]){
                    v[top.x+1][top.y] = false;
                    ans[top.x+1][top.y] = step;
                    newnode = Node(top.x+1, top.y);
                    q.push(newnode);
                }
            }
            if(top.y+1<=m){
                if(v[top.x][top.y+1]){
                    v[top.x][top.y+1] = false;
                    ans[top.x][top.y+1] = step;
                    newnode = Node(top.x, top.y+1);
                    q.push(newnode);
                }
            }
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(j>1){cout << " ";}
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}
