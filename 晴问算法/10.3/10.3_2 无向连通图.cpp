 /**
 * @brief: 10.3_2 无向连通图
 * @link: https://sunnywhy.com/sfbj/10/3/381
 * @date: 2026-03-01 16:20:20
 */

//

#include <iostream>
#include <vector>
using namespace std;

int findRoot(int s, vector<int> &f){
    if(f[s]<0){
        return s;
    }else{
        return f[s] = findRoot(f[s], f);
    }
}

void unionSet(int a, int b, vector<int> &f){
    int ra = findRoot(a, f);
    int rb = findRoot(b, f);
    if(ra == rb){
        return;
    }else{
        if((-ra) > (-rb)){
            f[ra] += f[rb];
            f[rb] = ra;
        }else{
            f[rb] += f[ra];
            f[ra] = rb;
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> father(n, -1);
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        unionSet(a, b, father);
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        if(father[i]<0){
            ans++;
        }
    }
    if(ans == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
