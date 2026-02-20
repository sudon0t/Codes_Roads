 /**
 * @brief: 简单_KY47 吃糖果
 * @link: https://www.nowcoder.com/practice/72015680c32b449899e81f1470836097
 * @date: 2026-02-19 11:19:12
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> ans;
    ans.push_back(0);
    ans.push_back(1);
    ans.push_back(2);
    for(int i=3; i<=n; i++){
        ans.push_back(ans[i-1] + ans[i-2]);
    }
    
    cout << ans[n] << endl; 

    return 0;
}
