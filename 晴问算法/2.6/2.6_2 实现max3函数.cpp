 /**
 * @brief: 2.6_2 实现max3函数
 * @link: https://sunnywhy.com/sfbj/2/6/39
 * @date: 2026-02-07 20:25:51
 */

//

#include <iostream>
using namespace std;

int max2(int a, int b){
    if(a>b) return a;
    return b;
}

int max3(int a, int b, int c){
    int x = max2(a, b);
    int y = max2(b, c);
    if(x>y) return x;
    return y;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << max3(a, b, c);
    return 0;
}
