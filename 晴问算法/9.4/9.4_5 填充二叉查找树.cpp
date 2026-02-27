 /**
 * @brief: 9.4_5 填充二叉查找树
 * @link: https://sunnywhy.com/sfbj/9/4/356
 * @date: 2026-02-27 21:21:54
 */

//

#include <iostream>
#include <utility>
#include <vector>
using namespace std;

vector<int> val;
vector<pair<int, int> > se;
vector<int > ansVec;

struct BTN{
    int idx;
    BTN* lc;
    BTN* rc;
};

BTN* buildTree(int idx){
    if(idx == -1){
        return NULL;
    }
    BTN* root = new BTN{idx, NULL, NULL};
    root->lc = buildTree(se[idx].first);
    root->rc = buildTree(se[idx].second);
    return root;
}

void preOrd(BTN* root){
    if(root == NULL){
        return;
    }
    ansVec.push_back(val[root->idx]);
    preOrd(root->lc);
    preOrd(root->rc);
}

int main(){
    int n;
    cin >> n;
    vector<int> fa(n, -1);
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        val.push_back(temp);
    }
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        se.push_back(pair<int, int>(a, b));
        if(a!=-1){fa[a] = i;}
        if(b!=-1){fa[b] = i;}
    }
    int rootIdx = 0;
    while(fa[rootIdx] != -1){
        rootIdx = fa[rootIdx];
    }
    BTN* root = buildTree(rootIdx);

    preOrd(root);
    cout << ansVec[0];
    for(int i=1; i<n; i++){
        cout << " " << ansVec[i];
    }
    return 0;
}
