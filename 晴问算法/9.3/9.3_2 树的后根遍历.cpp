 /**
 * @brief: 9.3_2 树的后根遍历
 * @link: https://sunnywhy.com/sfbj/9/3/346
 * @date: 2026-02-27 12:29:27
 */

//

#include <iostream>
#include <vector>
using namespace std;

vector<int> preVec;
vector<int> postVec;

void preOrd(int rootIdx, vector<vector<int> > &v){
    preVec.push_back(rootIdx);
    if(v[rootIdx][0]==0){
        return;
    }
    for(int i=1; i<=v[rootIdx][0]; i++){
        preOrd(v[rootIdx][i], v);
    }
}

void postOrd(int rootIdx, vector<vector<int> > &v){
    if(v[rootIdx][0]==0){
        postVec.push_back(rootIdx);
        return;
    }
    for(int i=1; i<=v[rootIdx][0]; i++){
        postOrd(v[rootIdx][i], v);
    }
    postVec.push_back(rootIdx);
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > v(n);
    vector<int> f(n, -1);
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        v[i].push_back(num);
        while (num--){
            int in;
            cin >> in;
            v[i].push_back(in);
            f[in] = i;
        }
    }
    int rootIdx = 0;
    while(f[rootIdx]!=-1){
        rootIdx = f[rootIdx];
    }
    // preOrd(rootIdx, v);
    // cout << preVec[0];
    // for(int i=1; i<n; i++){
    //     cout << " " << preVec[i];
    // }
    postOrd(rootIdx, v);
    cout << postVec[0];
    for(int i=1; i<n; i++){
        cout << " " << postVec[i];
    }
    return 0;
}
