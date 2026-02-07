 /**
 * @brief: 2.7_2 引用
 * @link: https://sunnywhy.com/sfbj/2/7/41
 * @date: 2026-02-07 20:37:28
 */

//

#include <iostream>
using namespace std;

void increase(int &x){
    x++;
}

int main(){
    int x;
    cin >> x;
    increase(x);
    cout << x << endl;
    return 0;
}
