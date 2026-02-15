 /**
 * @brief: 3.6_7 连续相同字符统计
 * @link: https://sunnywhy.com/sfbj/3/6/84
 * @date: 2026-02-15 11:38:03
 */

//

#include <iostream>
using namespace std;

int main(){
    int count;
    char lastch = '.';
    while(true){
        char ch = getchar();
        if(ch != lastch){
            if(lastch != '.'){
                cout << lastch << " " << count << endl;
            }
            count = 1;
        }else{
            count++;
        }
        if(ch == EOF){
            break;
        }
        lastch = ch;
    }
    return 0;
}
