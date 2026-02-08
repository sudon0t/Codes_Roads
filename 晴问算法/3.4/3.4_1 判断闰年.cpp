 /**
 * @brief: 3.4_1 判断闰年
 * @link: https://sunnywhy.com/sfbj/3/4
 * @date: 2026-02-08 21:32:59
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n%400==0||(n%4==0&&n%100!=0)){cout << "YES";}
    else{cout << "NO";}
    cout << endl;    
    return 0;
}
