 /**
 * @brief: 2.3_2 if嵌套
 * @link: https://sunnywhy.com/sfbj/2/3/18
 * @date: 2026-01-21 15:05:53
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n < 0){
        cout << "Negative Number";
    }else{
        if(n % 2){
            cout << "Odd Number";
        }else{
            cout << "Even Number";
        }
    }
    cout << endl;
    return 0;
}
