 /**
 * @brief: 4.3_16 自然数分解之方案数
 * @link: https://sunnywhy.com/sfbj/4/3/125
 * @date: 2026-02-17 14:40:20
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    // dp[i][j]：把i拆成最大数不超过j的方案数
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
    for (int j = 0; j <= n; ++j) {
        dp[0][j] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (j > i) {
                dp[i][j] = dp[i][i];
            } else if (j == i) {
                dp[i][j] = 1 + dp[i][j-1];
            } else {
                dp[i][j] = dp[i-j][j] + dp[i][j-1];
            }
        }
    }
    cout << dp[n][n] - 1 << endl;

    return 0;
}