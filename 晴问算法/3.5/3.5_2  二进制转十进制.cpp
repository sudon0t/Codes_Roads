 /**
 * @brief: 3.5_2  二进制转十进制
 * @link: https://sunnywhy.com/sfbj/3/5/75
 * @date: 2026-02-14 16:04:41
 */

//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int sum = 0;
    int len = str.length();
    for(int i=0; i<len; i++){
        sum += (str[i] - '0') * pow(2, len - i - 1);
    }
    cout << sum << endl;
    return 0;
}

