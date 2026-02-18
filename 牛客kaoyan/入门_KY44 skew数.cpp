 /**
 * @brief: KY44 skew数
 * @link: https://www.nowcoder.com/practice/5928127cc6604129923346e955e75984?tpId=40&tags=&title=&difficulty=1&judgeStatus=0&rp=1&sourceUrl=
 * @date: 2026-01-13 00:50:00
 */

 //将整体输入作为字符串，利于按位转换数字

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string str;
    while(cin >> str){
        long long sum = 0;
        int len = str.length();
        for(int i = 0; i<len; i++){
            int index = str[i] - '0';
            sum += index * (pow(2, len - i) - 1);
        }
        cout << sum << endl;
    }
    return 0;
}
