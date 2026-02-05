 /**
 * @brief: 2.5_9 字符串比较
 * @link: https://sunnywhy.com/sfbj/2/5/34
 * @date: 2026-02-05 22:27:58
 */

//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a;
    cin >> b;
    if (a > b) {
        cout << ">";
    } else if (a == b) {
        cout << "=";
    } else {
        cout << "<";
    }
    return 0;
}