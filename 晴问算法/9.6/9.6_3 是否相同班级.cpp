 /**
 * @brief: 9.6_3 是否相同班级
 * @link: https://sunnywhy.com/sfbj/9/6/362
 * @date: 2026-02-27 20:41:49
 */

//

#include <iostream>
#include <vector>
using namespace std;

vector<int> father;

int findRoot(int s){
    if(father[s]<0){
        return s;
    }else{
        return father[s] = findRoot(father[s]);
    }
}

bool judgeSet(int a, int b){
    return (findRoot(a) == findRoot(b));
}

void unionSet(int a, int b){
    int ra = findRoot(a);
    int rb = findRoot(b);
    if(ra == rb){
        return;
    }else{
        if((-ra)>(-rb)){
            father[ra] += father[rb];
            father[rb] = ra;
        }else{
            father[rb] += father[ra];
            father[ra] = rb;
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    for(int i=0; i<=n; i++){
        father.push_back(-1);
    }
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        unionSet(a, b);
    }
    cin >> m;
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        if(judgeSet(a, b)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}
