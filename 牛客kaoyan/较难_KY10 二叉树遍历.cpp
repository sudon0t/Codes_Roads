 /**
 * @brief: 较难_KY10 二叉树遍历
 * @link: https://www.nowcoder.com/practice/4b91205483694f449f94c179883c1fef
 * @date: 2026-02-26 19:38:39
 */

//

 /** 读错题，以为是层序遍历：
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

vector<char> ansVec;

struct BTN{
    char data;
    BTN* lc;
    BTN* rc;
};

void inOrd(BTN* root){
    if(root==NULL){return;}
    inOrd(root->lc);
    ansVec.push_back(root->data);
    inOrd(root->rc);
}

int main(){
    string str;
    getline(cin, str);
    BTN* root = new BTN{str[0], NULL, NULL};
    int idx = 1;
    queue<BTN*> q;
    q.push(root);
    bool isLeft = true;
    while(!q.empty()){
        BTN* top = q.front();
        if(str[idx]=='#'){
            ;
        }else{
            BTN* newNode = new BTN{str[idx], NULL, NULL};
            q.push(newNode);
            if(isLeft){
                top->lc = newNode;
            }else{
                top->rc = newNode;
            }
        }
        isLeft = !isLeft;
        if(isLeft){
            q.pop();
        }
        idx++;
    }
    inOrd(root);
    cout << ansVec[0];
    for(int i=1; i<ansVec.size(); i++){
        cout << " " << ansVec[i];
    }
    return 0;
}

 */

//正式答题：
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<char> ansVec;
string str;
int idx;

struct BTN{
    char data;
    BTN* lc;
    BTN* rc;
};

void inOrd(BTN* root){
    if(root==NULL){return;}
    inOrd(root->lc);
    ansVec.push_back(root->data);
    inOrd(root->rc);
}

BTN* buildTree(){
    idx++;
    if(str[idx]=='#'){
        return NULL;
    }
    BTN* root = new BTN;
    root->data = str[idx];
    root->lc = buildTree();
    root->rc = buildTree();
    return root;
}


int main(){
    getline(cin, str);
    idx = -1;
    BTN* root = buildTree();
    inOrd(root);
    cout << ansVec[0];
    for(int i=1; i<ansVec.size(); i++){
        cout << " " << ansVec[i];
    }
    return 0;
}
