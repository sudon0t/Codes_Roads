 /**
 * @brief: 3.1_5 三位数
 * @link: https://sunnywhy.com/sfbj/3/1/58
 * @date: 2026-02-08 19:52:14
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = n % 10;
    n /= 10;
    int b = n % 10;
    n /= 10;
    cout << n << " " << b << " " << a << endl;   
    return 0;
}
