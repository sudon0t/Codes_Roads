 /**
 * @brief: 2.6_1 实现increase函数
 * @link: https://sunnywhy.com/sfbj/2/6
 * @date: 2026-02-07 20:23:18
 */

//

#include <iostream>
using namespace std;

int increase(int n){
    return n+1;
}

int main(){
    int n;
    cin >> n;
    cout << increase(n) << " " << n << endl;
    return 0;
}
