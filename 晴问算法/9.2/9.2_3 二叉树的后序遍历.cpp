 /**
 * @brief: 9.2_3 二叉树的后序遍历
 * @link: https://sunnywhy.com/sfbj/9/2/331
 * @date: 2026-02-25 23:59:30
 */

//

#include <iostream>
#include <vector>
using namespace std;

struct BTNode{
    int l, r;
    BTNode(int _l, int _r){
        l = _l;
        r = _r;
    }
};

vector<BTNode> v;
vector<int> ansVec;

void preOrd(int root){
    ansVec.push_back(root);
    if(v[root].l!=-1){preOrd(v[root].l);}
    if(v[root].r!=-1){preOrd(v[root].r);}
}

void inOrd(int root){
    if(v[root].l!=-1){inOrd(v[root].l);}
    ansVec.push_back(root);
    if(v[root].r!=-1){inOrd(v[root].r);}
}
void postOrd(int root){
    if(v[root].l!=-1){postOrd(v[root].l);}
    if(v[root].r!=-1){postOrd(v[root].r);}
    ansVec.push_back(root);
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        BTNode nn = BTNode(a, b);
        v.push_back(nn);
    }
    // preOrd(0);
    // inOrd(0);
    postOrd(0);
    cout << ansVec[0];
    for(int i=1; i<n; i++){
        cout << " " << ansVec[i];
    }
    return 0;
}
