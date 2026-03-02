 /**
 * @brief: 10.2_4 有向图的邻接表
 * @link: https://sunnywhy.com/sfbj/10/2/379
 * @date: 2026-03-01 15:36:49
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int> > out(n);
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        out[a].push_back(b);
    }
    
    for(int i=0; i<n; i++){
        cout << i << "(" << out[i].size() << ")";
        for(int j=0; j<out[i].size(); j++){
            cout << " " << out[i][j];
        }
        cout << endl;
    }
    return 0;
}