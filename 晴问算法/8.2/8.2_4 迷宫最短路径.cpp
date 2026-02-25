 /**
 * @brief: 8.2_4 迷宫最短路径
 * @link: https://sunnywhy.com/sfbj/8/2/321
 * @date: 2026-02-25 11:08:48
 */

//

#include <iostream>
#include <string>
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
    queue<string> path;
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
    path.push("");
    v[1][1] = false;
    bool getans = false;
    int step = 0;
    while(!q.empty()&&!getans){
        int num = q.size();
        while(num--){
            Node top = q.front();
            string thispath = path.front();
            if(top.x==n&&top.y==m){
                getans = true;
                break;
            }
            q.pop();
            path.pop();
            if(top.x-1>=1){
                if(v[top.x-1][top.y]){
                    v[top.x-1][top.y] = false;
                    newnode = Node(top.x-1, top.y);
                    q.push(newnode);
                    path.push(thispath + "W");
                }
            }
            if(top.y-1>=1){
                if(v[top.x][top.y-1]){
                    v[top.x][top.y-1] = false;
                    newnode = Node(top.x, top.y-1);
                    q.push(newnode);
                    path.push(thispath + "A");
                }
            }
            if(top.x+1<=n){
                if(v[top.x+1][top.y]){
                    v[top.x+1][top.y] = false;
                    newnode = Node(top.x+1, top.y);
                    q.push(newnode);
                    path.push(thispath + "S");
                }
            }
            if(top.y+1<=m){
                if(v[top.x][top.y+1]){
                    v[top.x][top.y+1] = false;
                    newnode = Node(top.x, top.y+1);
                    q.push(newnode);
                    path.push(thispath + "D");
                }
            }
        }
        step++;
    }
    string ans = path.front();
    int len = ans.length();
    int x = 1, y = 1;
    cout << x << " " << y << endl;
    for(int i=0; i<len; i++){
        switch(ans[i]){
            case 'W':
                x--;
                break;
            case 'A':
                y--;
                break;
            case 'S':
                x++;
                break;
            case 'D':
                y++;
                break;
        }
        cout << x << " " << y << endl;
    }
    return 0;
}
