 /**
 * @brief: 9.3_6 树的路径和
 * @link: https://sunnywhy.com/sfbj/9/3/350
 * @date: 2026-02-27 13:54:08
 */

//

#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int> > v(n);
    vector<int> d(n, -1);
    vector<int> f(n, -1);
    vector<int> value;
    vector<int> leaf;
    int depth = 1;
    for(int i=0; i<n; i++){
        int in;
        cin >> in;
        value.push_back(in);
    }
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        v[i].push_back(num);
        if(num==0){leaf.push_back(i);}
        while (num--){
            int in;
            cin >> in;
            v[i].push_back(in);
            f[in] = i;
        }
    }
    int rootIdx = 1;
    while(f[rootIdx]!=-1){
        rootIdx = f[rootIdx];
    }
    queue<int> q;
    q.push(rootIdx);
    while(!q.empty()){
        int len = q.size();
        while(len--){
            int top = q.front();
            q.pop();
            d[top] = depth;
            int len1 = v[top][0];
            for(int i=1; i<=v[top][0]; i++){
                q.push(v[top][i]);
            }
        }
        depth++;
    }
    int ans = 0;
    for(int i=0; i<leaf.size(); i++){
        int idx = leaf[i];
        while(f[idx]!=-1){
            ans += value[idx];
            idx = f[idx];
        }
        ans += value[idx];
    }
    cout << ans << endl;
    return 0;
}