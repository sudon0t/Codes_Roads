 /**
 * @brief: 9.2_15 满二叉树的判定
 * @link: https://sunnywhy.com/sfbj/9/2/343
 * @date: 2026-02-26 22:30:06
 */

//

#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <set>
using namespace std;

vector<pair<int, int> > t;
bool pass = true;

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
    vector<int> nums = {1, 2, 4, 8, 16, 32};
    int idx = 0;
    while(!q.empty()){
        int len = q.size();
        if(len != nums[idx]){
            pass = false;
            return;
        }
        for(int i=0; i<len; i++){
            BTN* top = q.front();
            q.pop();
            if(top->lc!=NULL){q.push(top->lc);}
            if(top->rc!=NULL){q.push(top->rc);}
        }
        idx++;
    }
}

int main(){
    int n;
    cin >> n;
    set<int> possibility = {1, 3, 7, 15, 31, 63};
    if(possibility.find(n)== possibility.end()){
        cout << "No" << endl;
        return 0;
    }
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
    if(pass){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
