 /**
 * @brief: 10.3_3 有向图判环
 * @link: https://sunnywhy.com/sfbj/10/3/382
 * @date: 2026-03-01 16:22:00
 */

//

#include <iostream>
#include <vector>
using namespace std;

bool pass = true;

void DFS(int i, vector<vector<int> > &v, vector<bool> &flags){
    if(flags[i]){
        pass = false;
        return;
    }else{
        flags[i] = true;
    }
    int len = v[i].size();
    for(int j=0; j<len; j++){
        if(!pass){return;}
        DFS(v[i][j], v, flags);
    }
    flags[i] = false;
}

void judge(int i, vector<vector<int> > &v){
    vector<bool> flags(v.size(), false);
    DFS(i, v, flags);
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int> > out(n);
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        out[a].push_back(b);
    }
    
    for(int i=0; i<n; i++){
        if(pass){
            judge(i, out);
        }
    }
    if(pass){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}