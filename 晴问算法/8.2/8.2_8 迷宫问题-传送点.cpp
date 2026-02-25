 /**
 * @brief: 8.2_8 迷宫问题-传送点
 * @link: https://sunnywhy.com/sfbj/8/2/325
 * @date: 2026-02-25 15:49:11
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
    vector<Node> tp;
    queue<Node> q;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            int in;
            cin >> in;
            if(in==0){
                v[i][j] = true;
            }else if(in==2){
                v[i][j] = true;
                Node tpnode = Node(i, j);
                tp.push_back(tpnode);
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
            if(top.x-1==tp[0].x&&top.y==tp[0].y){
                v[top.x][top.y] = false;
                newnode = Node(top.x-1, top.y);
                q.push(newnode);
            }
            q.pop();
            if(top.x-1>=1){
                if(v[top.x-1][top.y]){
                    v[top.x-1][top.y] = false;
                    newnode = Node(top.x-1, top.y);
                    q.push(newnode);
                    if(top.x-1==tp[0].x&&top.y==tp[0].y){
                        v[tp[1].x][tp[1].y] = false;
                        newnode = Node(tp[1].x, tp[1].y);
                        q.push(newnode);
                    }
                    if(top.x-1==tp[1].x&&top.y==tp[1].y){
                        v[tp[0].x][tp[0].y] = false;
                        newnode = Node(tp[0].x, tp[0].y);
                        q.push(newnode);
                    }
                }
            }
            if(top.y-1>=1){
                if(v[top.x][top.y-1]){
                    v[top.x][top.y-1] = false;
                    newnode = Node(top.x, top.y-1);
                    q.push(newnode);
                    if(top.x==tp[0].x&&top.y-1==tp[0].y){
                        v[tp[1].x][tp[1].y] = false;
                        newnode = Node(tp[1].x, tp[1].y);
                        q.push(newnode);
                    }
                    if(top.x==tp[1].x&&top.y-1==tp[1].y){
                        v[tp[0].x][tp[0].y] = false;
                        newnode = Node(tp[0].x, tp[0].y);
                        q.push(newnode);
                    }
                }
            }
            if(top.x+1<=n){
                if(v[top.x+1][top.y]){
                    v[top.x+1][top.y] = false;
                    newnode = Node(top.x+1, top.y);
                    q.push(newnode);
                    if(top.x+1==tp[0].x&&top.y==tp[0].y){
                        v[tp[1].x][tp[1].y] = false;
                        newnode = Node(tp[1].x, tp[1].y);
                        q.push(newnode);
                    }
                    if(top.x+1==tp[1].x&&top.y==tp[1].y){
                        v[tp[0].x][tp[0].y] = false;
                        newnode = Node(tp[0].x, tp[0].y);
                        q.push(newnode);
                    }
                }
            }
            if(top.y+1<=m){
                if(v[top.x][top.y+1]){
                    v[top.x][top.y+1] = false;
                    newnode = Node(top.x, top.y+1);
                    q.push(newnode);
                    if(top.x==tp[0].x&&top.y+1==tp[0].y){
                        v[tp[1].x][tp[1].y] = false;
                        newnode = Node(tp[1].x, tp[1].y);
                        q.push(newnode);
                    }
                    if(top.x==tp[1].x&&top.y+1==tp[1].y){
                        v[tp[0].x][tp[0].y] = false;
                        newnode = Node(tp[0].x, tp[0].y);
                        q.push(newnode);
                    }
                }
            }
        }
        ans++;
    }
    cout << "-1" << endl;
    return 0;
}
