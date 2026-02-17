 /**
 * @brief: 4.3_8 回文字符串
 * @link: https://sunnywhy.com/sfbj/4/3/117
 * @date: 2026-02-15 22:10:43
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
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
