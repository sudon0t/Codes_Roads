 /**
 * @brief: 2.10_7 输出格式III
 * @link: https://sunnywhy.com/sfbj/2/10/53
 * @date: 2026-02-08 19:26:41
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int temp;
        cin >> temp;
        cout << temp + 1;
        if(n){cout << " ";}
    }
    return 0;
}
