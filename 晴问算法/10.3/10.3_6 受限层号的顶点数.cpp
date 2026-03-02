 /**
 * @brief: 10.3_6 受限层号的顶点数
 * @link: https://sunnywhy.com/sfbj/10/3/385
 * @date: 2026-03-01 20:11:30
 */

//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int n, m, s, k;
    cin >> n >> m >> s >> k;
    vector<vector<int> > v(n);
    vector<int> layer(n, -1);
    vector<int> flags(n, false);
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
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
    int ans = 0;
    for(int i=0; i<n; i++){
        if(layer[i] <= k && layer[i] >= 0){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
