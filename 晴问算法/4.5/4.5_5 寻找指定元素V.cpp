 /**
 * @brief: 4.5_5 寻找指定元素V
 * @link: https://sunnywhy.com/sfbj/4/5/159
 * @date: 2026-02-24 18:38:10
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    vector<int> v;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int ans = -1;
    for(int i=n-1;; i>=0; i--){
        if(t == v[i]){
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}
