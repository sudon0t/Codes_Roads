//  /**
//  * @brief: 9.2_10 层序中序还原二叉树
//  * @link: https://sunnywhy.com/sfbj/9/2/338
//  * @date: 2026-02-26 16:55:16
//  */

// //

// #include <iostream>
// #include <queue>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<int> preVec;
// vector<int> inVec;
// vector<int> postVec;
// vector<int> layerVec;

// struct BTN{
//     int data;
//     BTN *l;
//     BTN *r;
// };

// void preOrd(BTN *root){
//     preVec.push_back(root->data);
//     if(root->l!=NULL){preOrd(root->l);}
//     if(root->r!=NULL){preOrd(root->r);}
// }

// int main(){
//     int n;
//     cin >> n;
//     queue<BTN*> q;
//     for(int i=0; i<n; i++){
//         int temp;
//         cin >> temp;
//         layerVec.push_back(temp);
//     }
//     for(int i=0; i<n; i++){
//         int temp;
//         cin >> temp;
//         inVec.push_back(temp);
//     }
//     BTN* root = new BTN{layerVec[0], NULL, NULL};
//     bool isLeft = true;
//     int tIdx;
//     int fIdx = find(inVec.begin(), inVec.end(), layerVec[0]) - inVec.begin();
//     q.push(root);
//     int count = 0;
//     while(count!=n-1){
//         BTN* top = q.front();
//         int fvalue = top->data;
//         fIdx = find(inVec.begin(), inVec.end(), fvalue) - inVec.begin();
//         int value = layerVec[count+1];
//         tIdx = find(inVec.begin(), inVec.end(), value) - inVec.begin();
//         if(isLeft){
//             isLeft = false;
//             if(tIdx<fIdx){
//                 BTN* newNode = new BTN{value, NULL, NULL};
//                 top->l = newNode;
//                 count++;
//                 q.push(newNode);
//             }else{
//                 continue;
//             }
//         }else{
//             isLeft = true;
//             if(tIdx>fIdx){
//                 BTN* newNode = new BTN{value, NULL, NULL};
//                 top->r = newNode;
//                 count++;
//                 q.push(newNode);
//                 q.pop();
//             }else{
//                 continue;
//             }
//         }
//     }
//     preOrd(root);
//     cout << preVec[0];
//     for(int i=1; i<n; i++){
//         cout << " " << preVec[i];
//     }
//     return 0;
// }
