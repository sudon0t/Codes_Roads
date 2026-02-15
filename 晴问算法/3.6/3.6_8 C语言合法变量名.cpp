 /**
 * @brief: 3.6_8 C语言合法变量名
 * @link: https://sunnywhy.com/sfbj/3/6/85
 * @date: 2026-02-15 11:47:16
 */

//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    bool result = true;
    int len = str.size();

    if (!((str[0] >= 'A' && str[0] <= 'Z') ||
          (str[0] >= 'a' && str[0] <= 'z') ||
           str[0] == '_')) {
        result = false;
    }
    for (int i = 1; i < len; i++) {
        if (!((str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= '0' && str[i] <= '9') ||
               str[i] == '_')) {
            result = false;
            break;
        }
    }
    cout << (result ? "YES" : "NO");
    return 0;
}