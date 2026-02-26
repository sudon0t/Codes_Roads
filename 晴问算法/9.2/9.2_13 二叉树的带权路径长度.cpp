 /**
 * @brief: 9.2_13 二叉树的带权路径长度
 * @link: https://sunnywhy.com/sfbj/9/2/341
 * @date: 2026-02-26 21:03:08
 */

//

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> f(n, -1);
    vector<int> countSeries;
    vector<int> value;
    vector<int> path;
    for(int i=0; i<n; i++){
        int v;
        cin >> v;
        value.push_back(v);
    }
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        if(a!=-1){f[a] = i;}
        if(b!=-1){f[b] = i;}
        if(a==-1&b==-1){
            countSeries.push_back(i);
        }
    }
    int ans = 0;
    for(int i=0; i<countSeries.size(); i++){
        int up = f[countSeries[i]];
        while(up != -1){
            path.push_back(up);
            up = f[up];
        }
        ans += path.size() * value[countSeries[i]];
        path.clear();
    }
    cout << ans << endl;
    return 0;
}
