 /**
 * @brief: 2.4_2 break语句
 * @link: https://sunnywhy.com/sfbj/2/4/21
 * @date: 2026-01-21 15:19:15
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum += i;
        if(sum>2000){
            break;
        }
    }
    cout << sum << endl;
    return 0;
}