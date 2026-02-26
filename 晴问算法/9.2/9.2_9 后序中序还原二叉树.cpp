 /**
 * @brief: 9.2_9 后序中序还原二叉树
 * @link: https://sunnywhy.com/sfbj/9/2/337
 * @date: 2026-02-26 16:31:29
 */

//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> preVec;
vector<int> inVec;
vector<int> postVec;

struct BTN{
    int data;
    BTN *l;
    BTN *r;
};

void preOrd(BTN *root){
    preVec.push_back(root->data);
    if(root->l!=NULL){preOrd(root->l);}
    if(root->r!=NULL){preOrd(root->r);}
}

BTN* postinBuild(int pl, int pr, int il, int ir){
    if(pl > pr){
        return NULL;
    }
    int value = postVec[pr];
    BTN* root = new BTN{value, NULL, NULL};
    int llen = find(inVec.begin(), inVec.end(), value) - inVec.begin() - il;
    root->l = postinBuild(pl, pl+llen-1, il, il+llen-1);
    root->r = postinBuild(pl+llen, pr-1, il+llen+1, ir);
    return root;
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        postVec.push_back(temp);
    }
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        inVec.push_back(temp);
    }
    BTN* root = postinBuild(0, n-1, 0, n-1);
    preOrd(root);
    cout << preVec[0];
    for(int i=1; i<n; i++){
        cout << " " << preVec[i];
    }
    return 0;
}
