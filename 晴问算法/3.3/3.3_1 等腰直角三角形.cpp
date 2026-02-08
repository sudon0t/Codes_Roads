 /**
 * @brief: 3.3_1 等腰直角三角形
 * @link: https://sunnywhy.com/sfbj/3/3
 * @date: 2026-02-08 21:08:58
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int o = n;
    while(n--){
        int m = o - n;
        while(m--){cout << "*";};
        cout << endl;
    }
    
    return 0;
}
