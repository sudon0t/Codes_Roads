 /**
 * @brief: 2.3_3 switch语句
 * @link: https://sunnywhy.com/sfbj/2/3/19
 * @date: 2026-01-21 15:09:02
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    switch (n){
    case 0:
        cout << "Zero";
        break;
    case 1:
        cout << "One";
        break;
    case 2:
        cout << "Two";
        break;
    case 3:
        cout << "Three";
        break;
    case 4:
        cout << "Four";
        break;
    case 5:
        cout << "Five";
        break;

    default:
        cout << "Greater than 5";
        break;
    }
    return 0;
}
