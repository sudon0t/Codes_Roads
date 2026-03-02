 /**
 * @brief: 简单_KY147 还是畅通工程
 * @link: https://www.nowcoder.com/practice/d6bd75dbb36e410995f8673a6a2e2229
 * @date: 2026-03-02 16:11:47
 */

//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct DisPoint{
    int f;
    int t;
    int dist;
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
    while(cin >> n){
        if(n == 0){
            break;
        }
        priority_queue<DisPoint> pq;
        int len = n * (n-1) / 2;
        for(int i=0; i<len; i++){
            int a, b, w;
            cin >> a >> b >> w;
            pq.push(DisPoint{a, b, w});
        }
        int ans = 0.0;
        int edgeCount = 0;
        vector<int> pSet(n+1, -1);
        while(!pq.empty()){
            int pfrom = pq.top().f;
            int pto = pq.top().t;
            int dist = pq.top().dist;
            pq.pop();
            if(unionSet(pfrom, pto, pSet)){
                ans += dist;
                edgeCount++;
            }
            if(edgeCount==n-1){
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}