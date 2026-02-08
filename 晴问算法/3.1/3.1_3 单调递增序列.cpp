 /**
 * @brief: 3.1_3 单调递增序列
 * @link: https://sunnywhy.com/sfbj/3/1/56
 * @date: 2026-02-08 19:46:12
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    int last, now;
    cin >> n;
    cin >> last;
    n--;
    bool flag = true;
    while(n--){
        cin >> now;
        if(last>now){flag = false;}
        last = now;
    }
    if(flag){cout << "YES";}
    else{cout << "NO";}
    cout << endl;
    return 0;
}
