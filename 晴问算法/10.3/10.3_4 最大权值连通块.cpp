 /**
 * @brief: 10.3_4 最大权值连通块
 * @link: https://sunnywhy.com/sfbj/10/3/383
 * @date: 2026-03-01 17:27:27
 */

//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> father;
vector<int> value;

int findRoot(int s){
    if(father[s]<0){
        return s;
    }else{
        return father[s] = findRoot(father[s]);
    }
}

void unionSet(int a, int b){
    int ra = findRoot(a);
    int rb = findRoot(b);
    if(ra == rb){
        return;
    }else{
        if(value[ra] > value[rb]){
            father[ra] += father[rb];
            father[rb] = ra;
            value[ra] += value[rb];
        }else{
            father[rb] += father[ra];
            father[ra] = rb;
            value[rb] += value[ra];
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> scoresRank;
    for(int i=0; i<n; i++){
        father.push_back(-1);
        int s;
        cin >> s;
        value.push_back(s);
    }
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        unionSet(a, b);
    }
    for(int i=0; i<n; i++){
        if(father[i] < 0){
            scoresRank.push_back(value[i]);
        }
    }
    sort(scoresRank.begin(), scoresRank.end(), greater<int>());
    cout << scoresRank[0] << endl;
    return 0;
}