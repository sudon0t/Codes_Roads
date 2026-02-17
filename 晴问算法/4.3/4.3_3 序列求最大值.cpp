 /**
 * @brief: 4.3_3 序列求最大值
 * @link: https://sunnywhy.com/sfbj/4/3/112
 * @date: 2026-02-15 21:41:40
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int max = -1;
    while(n--){
        int temp;
        cin >> temp;
        if(temp > max){
            max = temp;
        }
    }
    cout << max << endl;
    
    return 0;
}
