 /**
 * @brief: 4.5_12 旋转数组的最小值
 * @link: https://sunnywhy.com/sfbj/4/5/166
 * @date: 2026-02-24 20:23:07
 */

//

#include <iostream>
using namespace std;

int main(){
    int n, min;
    cin >> n >> min;
    n--;
    while(n--){
        int temp;
        cin >> temp;
        if(temp<min){
            min = temp;
        }
    }
    cout << min << endl;    
    return 0;
}
