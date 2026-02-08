 /**
 * @brief: 2.10_6 输出格式II
 * @link: https://sunnywhy.com/sfbj/2/10/52
 * @date: 2026-02-08 19:21:46
 */

//

#include <iostream>
using namespace std;

int main(){
    int n, a, b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        cout << a+b << endl;
        if (n) {
            cout << endl;
        }
    }
    return 0;
}
