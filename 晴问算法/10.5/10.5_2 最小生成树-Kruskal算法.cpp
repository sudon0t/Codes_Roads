 /**
 * @brief: 10.5_2 最小生成树-Kruskal算法
 * @link: https://sunnywhy.com/sfbj/10/5/397
 * @date: 2026-03-02 10:24:39
 */

//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Road{
    int side1;
    int side2;
    int weight;
};

bool cmp(Road lhs, Road rhs){
    return lhs.weight > rhs.weight;
}

int findRoot(int s, vector<int> &v){
    if(v[s] < 0){
        return s;
    }else{
        return v[s] = findRoot(v[s], v);
    }
}

bool unionSet(int f, int t, vector<int> &v){
    int rootf = findRoot(f, v);
    int roott = findRoot(t, v);
    if(rootf == roott){
        return false;
    }else{
        if((-v[rootf]) > (-v[roott])){
            v[rootf] += v[roott];
            v[roott] = rootf;
        }else{
            v[roott] += v[rootf];
            v[rootf] = roott;
        }
        return true;
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<Road> roads;
    for(int i=0; i<m; i++){
        int a, b, w;
        cin >> a >> b >> w;
        roads.push_back(Road{a, b, w});
    }
    vector<int> roadSet(n, -1);
    sort(roads.begin(), roads.end(), cmp);
    int total = 0;
    int addCount = 0;
    while(!roads.empty()){
        int roadFrom = roads[roads.size()-1].side1;
        int roadTo = roads[roads.size()-1].side2;
        int w = roads[roads.size()-1].weight;
        roads.pop_back();
        if(unionSet(roadFrom, roadTo, roadSet)){
            total += w;
            addCount++;
        }
    }
    if(addCount < n-1){
        total = -1;
    }
    cout << total << endl;
    return 0;
}
