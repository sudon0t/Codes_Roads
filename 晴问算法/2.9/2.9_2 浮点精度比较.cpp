 /**
 * @brief: 2.9_2 浮点精度比较
 * @link: https://sunnywhy.com/sfbj/2/9/46
 * @date: 2026-02-07 21:58:46
 */

//

#include <iostream>
#include <cmath>
using namespace std;

const double eps = 1e-14;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    double ans1 = a * asin(sqrt(b) / 2);
    double ans2 = c * asin(sqrt(d) / 2);
    if(abs(ans1-ans2) < eps){cout << "0" << endl;}
    else if((ans1-ans2) > 0){cout << "1" << endl;}
    else{cout << "2" << endl;}
    return 0;
}
