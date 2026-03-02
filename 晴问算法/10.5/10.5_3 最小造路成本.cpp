 /**
 * @brief: 10.5_3 最小造路成本
 * @link: https://sunnywhy.com/sfbj/10/5/398
 * @date: 2026-03-02 18:30:44
 */

//

//Kruskal算法：
// #include <iostream>
// #include <queue>
// #include <vector>
// using namespace std;

// struct Node{
//     int f;
//     int t;
//     int weight;
// };

// bool operator < (Node lhs, Node rhs){
//     return lhs.weight > rhs.weight;
// }

// int findRoot(int s, vector<int> &v){
//     if(v[s] < 0){
//         return s;
//     }else{
//         return v[s] = findRoot(v[s], v);
//     }

// }

// bool unionSet(int x, int y, vector<int> &v){
//     int rootx = findRoot(x, v);
//     int rooty = findRoot(y, v);
//     if(rootx == rooty){
//         return false;
//     }else{
//         if((-v[rootx]) > (-v[rooty])){
//             v[rootx] += v[rooty];
//             v[rooty] = rootx;
//         }else{
//             v[rooty] += v[rootx];
//             v[rootx] = rooty;
//         }
//         return true;
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<vector<int> > v0(n, vector<int>(n, 0));
//     vector<int> roadSet(n, -1);
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cin >> v0[i][j];
//         }
//     }
//     priority_queue<Node> pq;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(v0[i][j] > 0){
//                 pq.push(Node{i, j, v0[i][j]});
//             }
//         }
//     }
//     int roadCount = 0;
//     int ans = 0;
//     while(!pq.empty()){
//         int x = pq.top().f;
//         int y = pq.top().t;
//         int w = pq.top().weight;
//         pq.pop();
//         if(unionSet(x, y, roadSet)){
//             roadCount++;
//             ans += w;
//         }
//         if(roadCount == n-1){
//             break;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }


//Prim算法：
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int> > v(n, vector<int>(n, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> v[i][j];
        }
    }
    vector<bool> inTree(n, false);
    vector<int> minDist(n, 1000);
    minDist[0] = 0;
    for(int i=0; i<n; i++){
        int target = -1;
        int min = 1000;
        for(int j=0; j<n; j++){
            if(!inTree[j] && minDist[j] < min){
                min = minDist[j];
                target = j;
            }
        }
        if(target == -1){
            cout << "-1" << endl;
            return 0;
        }
        inTree[target] = true;
        for(int j=0; j<n; j++){
            if(!inTree[j] && v[target][j] < minDist[j]){
                minDist[j] = v[target][j];
            }
        }
    }
    int ans = 0;
    for(auto &val : minDist){
        ans += val;
    }
    cout << ans << endl;
    return 0;
}
