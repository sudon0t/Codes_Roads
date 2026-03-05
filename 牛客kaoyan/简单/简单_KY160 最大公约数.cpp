 /**
 * @brief: 简单_KY160 最大公约数
 * @link: https://www.nowcoder.com/practice/20216f2c84bc438eb5ef05e382536fd3
 * @date: 2026-02-22 18:27:15
 */

//

#include <iostream>
#include <numeric>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        cout<<gcd(a,b)<<endl;
    }
    return 0;
}