 /**
 * @brief: 10.2_1 无向图的邻接矩阵
 * @link: https://sunnywhy.com/sfbj/10/2
 * @date: 2026-03-01 15:27:00
 */

//

#include <iostream>
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
        for(int j=0; j<n; j++){
            if(j>0){cout << " ";}
            cout << v[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
