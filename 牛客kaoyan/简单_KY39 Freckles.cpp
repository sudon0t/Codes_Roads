 /**
 * @brief: 简单_KY39 Freckles
 * @link: https://www.nowcoder.com/practice/41b14b4cd0e5448fb071743e504063cf
 * @date: 2026-03-02 11:52:55
 */

//

#include <iostream>
#include <cstdio>
#include <queue>
#include <cmath>
#include <vector>
using namespace std;

struct Point{
    double x;
    double y;
};

struct DisPoint{
    int f;
    int t;
    double dist;
};

bool operator < (DisPoint lhs, DisPoint rhs){
    return lhs.dist > rhs.dist;
}

int findRoot(int s, vector<int> &v){
    if(v[s] <0){
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
    int n;
    cin >> n;
    vector<Point> v;
    for(int i=0; i<n; i++){
        double x, y;
        cin >> x >> y;
        v.push_back(Point{x, y});
    }
    priority_queue<DisPoint> pq;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            double distance = sqrt(pow((v[i].x - v[j].x), 2) + pow((v[i].y - v[j].y), 2));
            pq.push(DisPoint{i, j, distance});
        }
    }
    double ans = 0.0;
    int edgeCount = 0;
    vector<int> pSet(n, -1);
    while(!pq.empty()){
        int pfrom = pq.top().f;
        int pto = pq.top().t;
        double dist = pq.top().dist;
        pq.pop();
        if(unionSet(pfrom, pto, pSet)){
            ans += dist;
            edgeCount++;
        }
        if(edgeCount==n-1){
            break;
        }
    }
    printf("%.2f", ans);
    return 0;
}