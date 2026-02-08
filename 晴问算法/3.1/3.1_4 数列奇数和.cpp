 /**
 * @brief: 3.1_4 数列奇数和
 * @link: https://sunnywhy.com/sfbj/3/1/57
 * @date: 2026-02-08 19:50:42
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    while(n--){
        int temp;
        cin >> temp;
        if(temp % 2){ans+=temp;}
    }
    cout << ans << endl;
    return 0;
}
