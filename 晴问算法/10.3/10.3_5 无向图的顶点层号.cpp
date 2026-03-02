 /**
 * @brief: 10.3_5 无向图的顶点层号
 * @link: https://sunnywhy.com/sfbj/10/3/384
 * @date: 2026-03-01 19:44:57
 */

//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int n, m, s;
    cin >> n >> m >> s;
    vector<vector<int> > v(n);
    vector<int> layer(n, -1);
    vector<int> flags(n, false);
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    queue<int> q;
    q.push(s);
    flags[s] = true;
    int step = 0;
    while(!q.empty()){
        int len = q.size();
        while(len--){
            int top = q.front();
            q.pop();
            layer[top] = step;
            int edges = v[top].size();
            for(int i=0; i<edges; i++){
                if(flags[v[top][i]]){
                    continue;
                }
                flags[v[top][i]] = true;
                q.push(v[top][i]);
            }
        }
        step++;
    }
    cout << layer[0];
    for(int i=1; i<n; i++){
        cout << " " << layer[i];
    }
    return 0;
}
