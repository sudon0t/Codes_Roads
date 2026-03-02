 /**
 * @brief: 10.6_2 有向无环图的判定-拓扑排序
 * @link: https://sunnywhy.com/sfbj/10/6/402
 * @date: 2026-03-02 20:46:05
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int> > v(n, vector<int>(n, 0));
    vector<int> inDegree(n, 0);
    vector<int> series;
    vector<bool> inSeries(n, false);
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        v[a][b] = 1;
        inDegree[b]++;
    }
    while(series.size() < n){
        int target = -1;
        for(int i=0; i<n; i++){
            if(!inSeries[i] && inDegree[i] == 0){
                target = i;
                break;
            }
        }
        if(target == -1){
            cout << "No" << endl;
            return 0;
        }
        series.push_back(target);
        inSeries[target] = true;
        for(int i=0; i<n; i++){
            if(v[target][i] == 1){
                inDegree[i]--;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}