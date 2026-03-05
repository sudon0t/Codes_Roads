 /**
 * @brief: 简单_KY171 字符串的反码
 * @link: https://www.nowcoder.com/practice/01b7dae14d1b464db5f9259e90d9a35e
 * @date: 2026-02-22 22:43:14
 */

//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int len = str.length();
    for(int i=0; i<len; i++){
        if(str[i]>='a' && str[i]<='z'){
            cout << char('z' - (str[i] - 'a'));
        }else if(str[i]>='A' && str[i]<='Z'){
            cout << char('Z' - (str[i] - 'A'));
        }else{
            cout <<str[i];
        }
    }
    cout << endl;
    return 0;
}
