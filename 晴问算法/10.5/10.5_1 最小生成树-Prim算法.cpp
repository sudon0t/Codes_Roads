 /**
 * @brief: 10.5_1 最小生成树-Prim算法
 * @link: https://sunnywhy.com/sfbj/10/5/396
 * @date: 2026-03-02 16:22:24
 */

//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    //构建邻接矩阵
    vector<vector<int> > v(n, vector<int>(n, 10000));
    for(int i=0; i<m; i++){
        int a, b, w;
        cin >> a >> b >> w;
        v[a][b] = w;
        v[b][a] = w;
    }

    //inTree判断时候加入树，minDist存储目前已找到最小边
    vector<bool> inTree(n, false);
    vector<int> minDist(n, 10000);

    //将0点加入树
    minDist[0] = 0;

    //循环n次添加点
    for(int i=0; i<n; i++){
        int target = -1;
        int min = 10000;
        for(int j=0; j<n; j++){//寻找一条未加入且距离树最短边
            if(!inTree[j] && minDist[j] < min){
                min = minDist[j];
                target = j;
            }
        }
        if(target == -1){//未找到，输出-1
            cout << "-1" << endl;
            return 0;
        }
        minDist[target] = min;
        inTree[target] = true;//找到，修改其连接的节点到树的最短距离
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