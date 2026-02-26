 /**
 * @brief: 9.2_8 先序中序还原二叉树
 * @link: https://sunnywhy.com/sfbj/9/2/336
 * @date: 2026-02-26 14:09:02
 */

//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> preVec;
vector<int> inVec;
vector<int> postVec;

struct BTN{
    int data;
    BTN *l;
    BTN *r;
};

void postOrd(BTN *root){
    if(root->l!=NULL){postOrd(root->l);}
    if(root->r!=NULL){postOrd(root->r);}
    postVec.push_back(root->data);
}

BTN* preinBuild(int pl, int pr, int il, int ir){
    if(pl > pr){
        return NULL;
    }
    int value = preVec[pl];
    BTN* root = new BTN{value, NULL, NULL};
    int llen = find(inVec.begin(), inVec.end(), value) - inVec.begin() - il;
    root->l = preinBuild(pl+1, pl+llen, il, il+llen-1);
    root->r = preinBuild(pl+llen+1, pr, il+llen+1, ir);
    return root;
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        preVec.push_back(temp);
    }
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        inVec.push_back(temp);
    }
    BTN* root = preinBuild(0, n-1, 0, n-1);
    postOrd(root);
    cout << postVec[0];
    for(int i=1; i<n; i++){
        cout << " " << postVec[i];
    }
    return 0;
}
