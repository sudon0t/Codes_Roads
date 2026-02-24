 /**
 * @brief: 4.5_7 寻找第一个1
 * @link: https://sunnywhy.com/sfbj/4/5/161
 * @date: 2026-02-24 18:40:27
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
        if(temp == 1){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
