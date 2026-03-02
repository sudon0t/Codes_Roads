 /**
 * @brief: 10.5_4 最大删边权值
 * @link: https://sunnywhy.com/sfbj/10/5/399
 * @date: 2026-03-02 19:43:14
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int> > v(n, vector<int>(n, 1000));
    int total = 0;
    for(int i=0; i<m; i++){
        int a, b, w;
        cin >> a >> b >> w;
        v[a][b] = w;
        v[b][a] = w;
        total += w;
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
    int treeCost = 0;
    for(auto &val : minDist){
        treeCost += val;
    }
    cout << total - treeCost << endl;
    return 0;
}