 /**
 * @brief: 4.3_4 反转字符串
 * @link: https://sunnywhy.com/sfbj/4/3/113
 * @date: 2026-02-15 21:43:20
 */

//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int len = str.length();
    for(int i=0; i<len/2; i++){
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    cout << str << endl;
    return 0;
}
