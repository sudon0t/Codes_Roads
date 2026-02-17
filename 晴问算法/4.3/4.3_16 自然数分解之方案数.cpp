 /**
 * @brief: 4.3_16 自然数分解之方案数
 * @link: https://sunnywhy.com/sfbj/4/3/125
 * @date: 2026-02-17 14:40:20
 */

//

#include <iostream>
#include <vector>
using namespace std;

vector<int> dp;

int getMax(int a, int b, int c){
    return c>(a>b?a:b)?c:(a>b?a:b);
}

int main(){
    int n;
    cin >> n;
    dp.push_back(0);
    dp.push_back(0);
    dp.push_back(1);
    dp.push_back(2);
    dp.push_back(4);
    for(int i=5; i<=n; i++){
        int max = 1;
        for(int j=1; j<i; j++){
            int num1 = j * dp[i-j];
            int num2 = j * (i-j);
            max = getMax(num1, num2, max);
            // cout << "cal:" << i << " " << "num1=" << j << "*" << dp[i-j] << "=" << num1;
            // cout << " num2=" << j << "*" << i-j << "=" << num2 << " " << "max=" << max << endl;
        }
        dp.push_back(max);
    }
    cout << dp[n];
    
    return 0;
}
