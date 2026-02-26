 /**
 * @brief: 9.2_16 完全二叉树的判定
 * @link: https://sunnywhy.com/sfbj/9/2/344
 * @date: 2026-02-26 22:37:15
 */

//

#include <iostream>
#include <queue>
#include <vector>
#include <utility>
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
    bool leafBegin = false;
    while(!q.empty()){
        BTN* top = q.front();
        q.pop();
        if(top->lc!=NULL){
            q.push(top->lc);
            if(leafBegin){
                pass = false;
                return;
            }
        }else{
            leafBegin = true;
        }
        if(top->rc!=NULL){
            q.push(top->rc);
            if(leafBegin){
                pass = false;
                return;
            }
        }else{
            leafBegin = true;
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
    if(pass){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
