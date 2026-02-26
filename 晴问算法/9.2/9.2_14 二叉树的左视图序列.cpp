 /**
 * @brief: 9.2_14 二叉树的左视图序列
 * @link: https://sunnywhy.com/sfbj/9/2/342
 * @date: 2026-02-26 21:32:19
 */

//

#include <iostream>
#include <queue>
#include <vector>
#include <utility>
using namespace std;

vector<pair<int, int> > t;
vector<int> ansVec;

struct BTN{
    int data;
    BTN* lc;
    BTN* rc;
};

BTN* buildTree(int rootIdx){
    if(rootIdx==-1){
        return NULL;
    }
    BTN* root = new BTN{rootIdx, NULL, NULL};
    root->lc = buildTree(t[rootIdx].first);
    root->rc = buildTree(t[rootIdx].second);
    return root;
}

void layerOrd(BTN* root){
    queue<BTN*> q;
    q.push(root);
    while(!q.empty()){
        int len = q.size();
        for(int i=0; i<len; i++){
            BTN* top = q.front();
            q.pop();
            if(i==0){
                ansVec.push_back(top->data);
            }
            if(top->lc!=NULL){q.push(top->lc);}
            if(top->rc!=NULL){q.push(top->rc);}
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> f(n, -1);
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        t.push_back(pair<int, int>(a, b));
        if(a!=-1){f[a] = i;}
        if(b!=-1){f[b] = i;}
    }
    int rootIdx;
    for(int i; i<n; i++){
        if(f[i]==-1){
            rootIdx = i;
            break;
        }
    }
    BTN* root = buildTree(rootIdx);
    layerOrd(root);
    cout << ansVec[0];
    for(int i=1; i<ansVec.size(); i++){
        cout << " " << ansVec[i];
    }
    return 0;
}
