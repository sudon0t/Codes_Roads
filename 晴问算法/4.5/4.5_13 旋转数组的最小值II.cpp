 /**
 * @brief: 4.5_13 旋转数组的最小值II
 * @link: https://sunnywhy.com/sfbj/4/5/167
 * @date: 2026-02-24 20:24:58
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
