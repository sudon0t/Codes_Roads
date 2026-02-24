 /**
 * @brief: 4.5_9 单峰序列
 * @link: https://sunnywhy.com/sfbj/4/5/163
 * @date: 2026-02-24 18:42:49
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = -1;
    int last;
    cin >> last;
    for(int i=1; i<n; i++){
        int temp;
        cin >> temp;
        if(temp<last){
            ans = i-1;
            break;
        }
        last = temp;
    }
    cout << ans << endl;
    return 0;
}
