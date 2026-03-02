 /**
 * @brief: 10.5_5 最小连通成本
 * @link: 
 * @date: 2026-03-02 19:51:22
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<vector<int> > v(n, vector<int>(n, 0));
    vector<int> con;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> v[i][j];
        }
    }
    for(int i=0; i<k; i++){
        int temp;
        cin >> temp;
        con.push_back(temp);
    }
    for(int i=0; i<k; i++){
        for(int j=i+1; j<k; j++){
            int x = con[i];
            int y = con[j];
            v[x][y] = 0;
            v[y][x] = 0;
            for(int l=0; l<n; l++){
                if(v[l][x] < v[l][y]){
                    v[l][y] = v[l][x];
                }else{
                    v[l][x] = v[l][y];
                }
                if(v[x][l] < v[y][l]){
                    v[y][l] = v[x][l];
                }else{
                    v[x][l] = v[y][l];
                }
            }
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
