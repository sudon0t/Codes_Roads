 /**
 * @brief: 9.2_7 翻转二叉树
 * @link: https://sunnywhy.com/sfbj/9/2/335
 * @date: 2026-02-26 13:55:49
 */

//

#include <iostream>
#include <algorithm>
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
vector<int> ansVec1;
vector<int> ansVec2;

void preOrd(int root){
    ansVec1.push_back(root);
    if(v[root].l!=-1){preOrd(v[root].l);}
    if(v[root].r!=-1){preOrd(v[root].r);}
}

void inOrd(int root){
    if(v[root].l!=-1){inOrd(v[root].l);}
    ansVec2.push_back(root);
    if(v[root].r!=-1){inOrd(v[root].r);}
}

void reverse(int root){
    if(v[root].l!=-1){reverse(v[root].l);}
    if(v[root].r!=-1){reverse(v[root].r);}
    swap(v[root].l, v[root].r);
}

int main(){
    int n;
    cin >> n;
    vector<int> root(n, -1);
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        BTNode nn = BTNode(a, b);
        v.push_back(nn);
    }
    reverse(0);
    preOrd(0);
    inOrd(0);
    cout << ansVec1[0];
    for(int i=1; i<n; i++){
        cout << " " << ansVec1[i];
    }
    cout << endl << ansVec2[0];
    for(int i=1; i<n; i++){
        cout << " " << ansVec2[i];
    }
    return 0;
}
