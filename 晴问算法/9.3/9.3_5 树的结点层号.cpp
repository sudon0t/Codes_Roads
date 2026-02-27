 /**
 * @brief: 9.3_5 树的结点层号
 * @link: https://sunnywhy.com/sfbj/9/3/349
 * @date: 2026-02-27 13:43:15
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
    int depth = 1;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        v[i].push_back(num);
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
    cout << d[0];
    for(int i=1; i<n; i++){
        cout << " " << d[i];
    }
    return 0;
}