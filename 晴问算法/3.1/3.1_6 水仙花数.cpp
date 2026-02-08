 /**
 * @brief: 3.1_6 水仙花数
 * @link: https://sunnywhy.com/sfbj/3/1/59
 * @date: 2026-02-08 19:57:02
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int target = n;
    int a = n % 10;
    n /= 10;
    int b = n % 10;
    n /= 10;
    if(a*a*a + b*b*b + n*n*n == target){cout << "YES";}
    else{cout << "NO";}
    cout << endl;
    return 0;
}
