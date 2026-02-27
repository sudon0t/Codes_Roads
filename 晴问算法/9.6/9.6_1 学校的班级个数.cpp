 /**
 * @brief: 9.6_1 学校的班级个数
 * @link: 
 * @date: 2026-02-27 17:25:29
 */

//

#include <iostream>
#include <vector>
using namespace std;

vector<int> father;

int findf(int s){
    while(father[s] != father[father[s]]){
        father[s] = father[father[s]];
    }
    return father[s];
}

void merge(int a, int b){
    int fa = findf(a);
    int fb = findf(b);
    if(fa != fb){
        father[fa] = fb;
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    for(int i=0; i<=n; i++){
        father.push_back(i);
    }
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        merge(a, b);
    }
    int ans = 0;
    for(int i=1; i<=n; i++){
        if(father[i] == i){
            ans++;
        };
    }
    cout << ans << endl;
    return 0;
}