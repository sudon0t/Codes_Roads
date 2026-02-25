 /**
 * @brief: 8.2_6 字符迷宫
 * @link: https://sunnywhy.com/sfbj/8/2/323
 * @date: 2026-02-25 15:33:50
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
    int x0, y0;
    int x1, y1;
    cin >> n >> m;
    vector<vector<bool> > v(n+1, vector<bool>(m+1, false));
    queue<Node> q;
    getchar();
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            char in = getchar();
            if(in=='.'){
                v[i][j] = true;
            }else if(in=='S'){
                v[i][j] = true;
                x0 = i;
                y0 = j;
            }else if(in=='T'){
                v[i][j] = true;
                x1 = i;
                y1 = j;
            }
        }
        getchar();
    }
    Node newnode = Node(x0, y0);
    q.push(newnode);
    v[x0][y0] = false;
    int ans = 0;
    while(!q.empty()){
        int num = q.size();
        while(num--){
            Node top = q.front();
            if(top.x==x1&&top.y==y1){
                cout << ans << endl;
                return 0;
            }
            q.pop();
            if(top.x-1>=1){
                if(v[top.x-1][top.y]){
                    v[top.x-1][top.y] = false;
                    newnode = Node(top.x-1, top.y);
                    q.push(newnode);
                }
            }
            if(top.y-1>=1){
                if(v[top.x][top.y-1]){
                    v[top.x][top.y-1] = false;
                    newnode = Node(top.x, top.y-1);
                    q.push(newnode);
                }
            }
            if(top.x+1<=n){
                if(v[top.x+1][top.y]){
                    v[top.x+1][top.y] = false;
                    newnode = Node(top.x+1, top.y);
                    q.push(newnode);
                }
            }
            if(top.y+1<=m){
                if(v[top.x][top.y+1]){
                    v[top.x][top.y+1] = false;
                    newnode = Node(top.x, top.y+1);
                    q.push(newnode);
                }
            }
        }
        ans++;
    }
    cout << "-1" << endl;
    return 0;
}
