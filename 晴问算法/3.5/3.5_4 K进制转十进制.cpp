 /**
 * @brief: 3.5_4 K进制转十进制
 * @link: https://sunnywhy.com/sfbj/3/5/77
 * @date: 2026-02-14 16:17:02
 */

//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string str;
    int k;
    long sum = 0;
    cin >> str >> k;
    int len = str.length();
    for(int i=0; i<len; i++){
        int num;
        if(str[i] >= '0' && str[i] <= '9'){
            num = str[i] - '0';
        }else{
            num = str[i] - 'A' + 10;
        }
        sum += num * pow(k, len - i - 1);
    }
    cout << sum << endl;
}