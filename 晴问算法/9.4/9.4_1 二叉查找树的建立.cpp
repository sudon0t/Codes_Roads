 /**
 * @brief: 9.4_1 二叉查找树的建立
 * @link: https://sunnywhy.com/sfbj/9/4/352
 * @date: 2026-02-27 14:09:57
 */

//

#include <iostream>
#include <vector>
using namespace std;

vector<int> inSeries;
vector<int> preVec;

struct BTN{
    int data; 
    BTN* lc;
    BTN* rc;
};

BTN* buildTree(BTN* root, int value){
    if(root == NULL){
        BTN* newNode = new BTN{value, NULL, NULL};
        return newNode;
    }
    if(value < (root->data)){
        root->lc = buildTree(root->lc, value);
    }
    if(value > (root->data)){
        root->rc = buildTree(root->rc, value);
    }
    return root;
}

void preOrd(BTN* root){
    if(root == NULL){
        return;
    }
    preVec.push_back(root->data);
    preOrd(root->lc);
    preOrd(root->rc);

}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        inSeries.push_back(temp);
    }
    BTN* root = new BTN{inSeries[0], NULL, NULL};
    for(int i=1; i<n; i++){
        buildTree(root, inSeries[i]);
    }
    preOrd(root);
    cout << preVec[0];
    for(int i=1; i<preVec.size(); i++){
        cout << " " << preVec[i];
    }

    return 0;
}
