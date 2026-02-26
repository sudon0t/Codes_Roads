 /**
 * @brief: 9.2_12 二叉树的路径和
 * @link: https://sunnywhy.com/sfbj/9/2/340
 * @date: 2026-02-26 20:43:18
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
        ans += value[countSeries[i]];
        int up = f[countSeries[i]];
        while(up != -1){
            ans += value[up];
            up = f[up];
        }
    }
    cout << ans << endl;
    return 0;
}
