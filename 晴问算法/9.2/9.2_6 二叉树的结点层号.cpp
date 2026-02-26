 /**
 * @brief: 9.2_6 二叉树的结点层号
 * @link: https://sunnywhy.com/sfbj/9/2/334
 * @date: 2026-02-26 11:08:29
 */

//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct BTNode{
    int l, r;
    BTNode(int _l, int _r){
        l = _l;
        r = _r;
    }
};

int main(){
    int n;
    cin >> n;
    vector<BTNode> v;
    queue<int> q;
    vector<int> ansVec(n);
    int layer = 1;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        BTNode nn = BTNode(a, b);
        v.push_back(nn);
    }
    q.push(0);
    while(!q.empty()){
        int len = q.size();
        while(len--){
            int top = q.front();
            ansVec[top] = layer;
            q.pop();
            if(v[top].l!=-1){q.push(v[top].l);}
            if(v[top].r!=-1){q.push(v[top].r);}
        }
        layer++;
    }
    cout << ansVec[0];
    for(int i=1; i<n; i++){
        cout << " " << ansVec[i];
    }
    return 0;
}
