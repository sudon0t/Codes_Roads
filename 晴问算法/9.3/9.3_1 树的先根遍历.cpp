 /**
 * @brief: 9.3_1 树的先根遍历
 * @link: https://sunnywhy.com/sfbj/9/3
 * @date: 2026-02-27 11:52:25
 */

//

#include <iostream>
#include <vector>
using namespace std;

vector<int> preVec;

void preOrd(int rootIdx, vector<vector<int> > &v){
    preVec.push_back(rootIdx);
    if(v[rootIdx][0]==0){
        return;
    }
    for(int i=1; i<=v[rootIdx][0]; i++){
        preOrd(v[rootIdx][i], v);
    }
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
    preOrd(rootIdx, v);
    cout << preVec[0];
    for(int i=1; i<n; i++){
        cout << " " << preVec[i];
    }
    return 0;
}
