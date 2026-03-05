 /**
 * @brief: 简单_KY83 数字求和
 * @link: https://www.nowcoder.com/practice/e8cee01f2d834fa9ba3479fafe492b65
 * @date: 2026-02-19 17:13:13
 */

//

#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int ans = 0;
    int n = 5;
    while(n--){
        int temp;
        cin >> temp;
        if(temp < a){
            ans += temp;
        }
    }
    cout << ans << endl;
    
    return 0;
}
