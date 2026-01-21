 /**
 * @brief: 2.4_6 二重循环III
 * @link: https://sunnywhy.com/sfbj/2/4/25
 * @date: 2026-01-21 15:47:10
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i + 1; j++){
            if(j > 1){cout << " ";}
            cout << j;
        }
        cout << endl;
    }
    return 0;
}