 /**
 * @brief: 简单_KY51 位操作练习
 * @link: https://www.nowcoder.com/practice/7bdc346ca39841f6a05f73d98477621d
 * @date: 2026-02-19 11:21:56
 */

//

#include <iostream>
using namespace std;

int main(){
    unsigned short num1, num2;
    while(cin >> num1 >> num2){
        bool flag = false;
        for(int i=0; i<16; i++){
            unsigned short ls = num1<<i | num1>>(16-i) & 0xFFFF;
            if(ls==num2){
                flag = true;
                cout << "YES" << endl;
                break;
            }
        }
        if(flag==false)cout << "NO" << endl;
    }
    return 0;
}
