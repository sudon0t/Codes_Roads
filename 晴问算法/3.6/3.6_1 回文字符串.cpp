 /**
 * @brief: 3.6_1 回文字符串
 * @link: https://sunnywhy.com/sfbj/3/6
 * @date: 2026-02-14 16:44:35
 */

//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int len = str.length();
    for(int i=0; i<=len/2; i++){
        if(str[i] != str[len-i-1]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
