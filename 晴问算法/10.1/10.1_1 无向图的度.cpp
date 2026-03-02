 /**
 * @brief: 10.1_1 无向图的度
 * @link: https://sunnywhy.com/sfbj/10/1/374
 * @date: 2026-03-01 15:14:08
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
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;;
        v[a][b] = 1;
        v[b][a] = 1;
    }
    for(int i=0; i<n; i++){
        if(i>0){cout << " ";}
        int edge = 0;
        for(int j=0; j<n; j++){
            edge += v[i][j];
        }
        cout << edge;
    }
    
    return 0;
}
