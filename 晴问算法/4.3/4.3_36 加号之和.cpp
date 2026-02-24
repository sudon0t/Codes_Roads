 /**
 * @brief: 4.3_36 加号之和
 * @link: https://sunnywhy.com/sfbj/4/3/145
 * @date: 2026-02-24 09:29:09
 */

//

#include <iostream>
#include <string>
using namespace std;

long long ans = 0;
string str;

void dfs(int i, long long nocal, long long cur){
    // cout << i << " " << nocal << " " << cur << endl;
    if(i==str.length()){
        cur += nocal;
        ans += cur;
        // cout << "add:" << cur << endl;
        return;
    }
    // 加+
    dfs(i+1, str[i]-'0', cur+nocal);
    //不加+
    dfs(i+1, 10 * nocal + str[i] - '0', cur);
}

int main(){
    cin >> str;
    dfs(1, str[0] - '0', 0);
    cout << ans << endl;
    return 0;
}