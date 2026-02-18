 /**
 * @brief: 简单_KY16 n的阶乘
 * @link: https://www.nowcoder.com/practice/97be22ee50b14cccad2787998ca628c8
 * @date: 2026-02-18 19:24:05
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> dp;
    dp.push_back(1);
    dp.push_back(1);
    for(int i=2; i<=n; i++){
        dp.push_back(dp[i-1]*i);
    }
    cout << dp[n] << endl;
    return 0;
}
