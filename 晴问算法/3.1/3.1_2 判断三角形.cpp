 /**
 * @brief: 3.1_2 判断三角形
 * @link: https://sunnywhy.com/sfbj/3/1/55
 * @date: 2026-02-08 19:44:15
 */

//

#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if((a+b>c)&&(a+c>b)&&(b+c>a)){cout << "YES";}
    else{cout << "NO";}
    cout << endl;
    return 0;
}
