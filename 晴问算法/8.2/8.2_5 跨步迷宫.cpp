 /**
 * @brief: 8.2_5 跨步迷宫
 * @link: https://sunnywhy.com/sfbj/8/2/322
 * @date: 2026-02-25 14:58:45
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
    int ans = 0;
    while(!q.empty()){
        int num = q.size();
        while(num--){
            Node top = q.front();
            if(top.x==n&&top.y==m){
                cout << ans << endl;
                return 0;
            }
            q.pop();
            if(top.x-1>=1){
                if(v[top.x-1][top.y]){
                    v[top.x-1][top.y] = false;
                    newnode = Node(top.x-1, top.y);
                    q.push(newnode);
                    if(top.x-2>=1){
                        if(v[top.x-2][top.y]){
                            v[top.x-2][top.y] = false;
                            newnode = Node(top.x-2, top.y);
                            q.push(newnode);
                        }
                    }
                }
            }
            if(top.y-1>=1){
                if(v[top.x][top.y-1]){
                    v[top.x][top.y-1] = false;
                    newnode = Node(top.x, top.y-1);
                    q.push(newnode);
                    if(top.y-2>=1){
                        if(v[top.x][top.y-2]){
                            v[top.x][top.y-2] = false;
                            newnode = Node(top.x, top.y-2);
                            q.push(newnode);
                        }
                    }
                }
            }
            if(top.x+1<=n){
                if(v[top.x+1][top.y]){
                    v[top.x+1][top.y] = false;
                    newnode = Node(top.x+1, top.y);
                    q.push(newnode);
                    if(top.x+2<=n){
                        if(v[top.x+2][top.y]){
                            v[top.x+2][top.y] = false;
                            newnode = Node(top.x+2, top.y);
                            q.push(newnode);
                        }
                    }
                }
            }
            if(top.y+1<=m){
                if(v[top.x][top.y+1]){
                    v[top.x][top.y+1] = false;
                    newnode = Node(top.x, top.y+1);
                    q.push(newnode);
                    if(top.y+2<=m){
                        if(v[top.x][top.y+2]){
                            v[top.x][top.y+2] = false;
                            newnode = Node(top.x, top.y+2);
                            q.push(newnode);
                        }
                    }
                }
            }
        }
        ans++;
    }
    cout << "-1" << endl;
    return 0;
}
