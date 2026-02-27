 /**
 * @brief: 9.6_2 学校的班级人数
 * @link: https://sunnywhy.com/sfbj/9/6/361
 * @date: 2026-02-27 18:30:58
 */

//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> father;
vector<int> classVec;

int findRoot(int s){
    if(father[s] < 0){
        return s;
    }
    return father[s] = findRoot(father[s]);
}

void unionSet(int a, int b){
    int roota = findRoot(a);
    int rootb = findRoot(b);
    if(roota != rootb){
        if((-father[roota]) > (-father[rootb])){
            father[roota] += father[rootb];
            father[rootb] = roota;
        }else{
            father[rootb] += father[roota];
            father[roota] = rootb;
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
    for(int i=1; i<=n; i++){
        if(father[i] < 0){
            classVec.push_back(-father[i]);
        }
    }
    sort(classVec.begin(), classVec.end(), greater<int>());
    cout << classVec.size() << endl;
    cout << classVec[0];
    for(int i=1; i<classVec.size(); i++){
        cout << " " << classVec[i];
    }
    return 0;
}
