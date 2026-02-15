 /**
 * @brief: 3.6_5 首字母大写
 * @link: https://sunnywhy.com/sfbj/3/6/82
 * @date: 2026-02-15 10:58:41
 */

//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    bool isFirst = true;
    while(cin >> str){
        str[0] += - 'a' + 'A';
        if(!isFirst){cout << " ";}
        cout << str;
        isFirst = false;
    }
    cout << endl;
    return 0;
}
