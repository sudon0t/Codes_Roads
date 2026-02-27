 /**
 * @brief: 9.3_3 树的层序遍历
 * @link: https://sunnywhy.com/sfbj/9/3/347
 * @date: 2026-02-27 12:32:28
 */

//

#include <iostream>
#include <queue>
using namespace std;

vector<int> ansVec;

int main(){
    int n;
    cin >> n;
    vector<vector<int> > v(n);
    vector<int> f(n, -1);
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
    int rootIdx = 0;
    while(f[rootIdx]!=-1){
        rootIdx = f[rootIdx];
    }
    queue<int> q;
    q.push(rootIdx);
    while(!q.empty()){
        int top = q.front();
        ansVec.push_back(top);
        q.pop();
        for(int i=1; i<=v[top][0]; i++){
            q.push(v[top][i]);
        }
    }
    cout << ansVec[0];
    for(int i=1; i<ansVec.size(); i++){
        cout << " " << ansVec[i];
    }
    return 0;
}
