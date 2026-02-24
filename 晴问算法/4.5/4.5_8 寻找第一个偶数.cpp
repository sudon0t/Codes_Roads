 /**
 * @brief: 4.5_8 寻找第一个偶数
 * @link: https://sunnywhy.com/sfbj/4/5/162
 * @date: 2026-02-24 18:42:12
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = -1;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        if(temp % 2 == 0){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
