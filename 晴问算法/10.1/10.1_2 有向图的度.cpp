 /**
 * @brief: 10.1_2 有向图的度
 * @link: https://sunnywhy.com/sfbj/10/1/375
 * @date: 2026-03-01 15:22:46
 */

//

#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int> > v(n, vector<int>(n, 0));
    vector<int> indegree;
    vector<int> outdegree;
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;;
        v[a][b] = 1;
    }
    for(int i=0; i<n; i++){
        int edgeout = 0;
        for(int j=0; j<n; j++){
            edgeout += v[i][j];
        }
        outdegree.push_back(edgeout);
    }
    for(int i=0; i<n; i++){
        int edgein = 0;
        for(int j=0; j<n; j++){
            edgein += v[j][i];
        }
        indegree.push_back(edgein);
    }
    for(int i=0; i<n; i++){
        cout << indegree[i] << " " << outdegree[i] << endl;
    }
    return 0;
}
