 /**
 * @brief: 9.4_3 还原二叉查找树
 * @link: https://sunnywhy.com/sfbj/9/4/354
 * @date: 2026-02-27 15:17:22
 */

//

#include <iostream>
#include <vector>
using namespace std;

vector<int> inSeries1;
vector<int> inSeries2;
vector<int> preVec1;
vector<int> preVec2;

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

void preOrd1(BTN* root){
    if(root == NULL){
        return;
    }
    preVec1.push_back(root->data);
    preOrd1(root->lc);
    preOrd1(root->rc);
}
void preOrd2(BTN* root){
    if(root == NULL){
        return;
    }
    preVec2.push_back(root->data);
    preOrd2(root->lc);
    preOrd2(root->rc);
}


int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        inSeries1.push_back(temp);
    }
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        inSeries2.push_back(temp);
    }

    BTN* root1 = new BTN{inSeries1[0], NULL, NULL};
    for(int i=1; i<n; i++){
        buildTree(root1, inSeries1[i]);
    }
    preOrd1(root1);

    BTN* root2 = new BTN{inSeries2[0], NULL, NULL};
    for(int i=1; i<n; i++){
        buildTree(root2, inSeries2[i]);
    }
    preOrd2(root2);
    bool check = true;
    for(int i=0; i<preVec1.size(); i++){
        if(preVec1[i] != preVec2[i]){
            check = false;
            break;
        }
    }
    if(check){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
