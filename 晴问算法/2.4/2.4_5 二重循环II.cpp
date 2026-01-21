 /**
 * @brief: 2.4_5 二重循环II
 * @link: https://sunnywhy.com/sfbj/2/4/24
 * @date: 2026-01-21 15:46:20
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(j > 1){cout << " ";}
            cout << j;
        }
        cout << endl;
    }
    return 0;
}