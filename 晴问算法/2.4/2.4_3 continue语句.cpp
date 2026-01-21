 /**
 * @brief: 2.4_3 continue语句
 * @link: https://sunnywhy.com/sfbj/2/4/22
 * @date: 2026-01-21 15:40:42
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i <= n; i++){
        if(i % 3 == 0){
            continue;
        }
        sum += i;
    }
    cout << sum << endl;
    return 0;
}