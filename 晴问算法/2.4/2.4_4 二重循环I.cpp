 /**
 * @brief: 2.4_4 二重循环I
 * @link: https://sunnywhy.com/sfbj/2/4/23
 * @date: 2026-01-21 15:42:49
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j > 1){cout << " ";}
            cout << j;
        }
        cout << endl;
    }
    return 0;
}