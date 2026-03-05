 /**
 * @brief: 简单_KY89 简单密码
 * @link: https://www.nowcoder.com/practice/ff99c43dd07f4e95a8f2f5448da3772a
 * @date: 2026-02-20 13:07:48
 */

//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    string strout = "";
    char psw[26] = {'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U'};
    while(getline(cin, str)){
        if(str == "ENDOFINPUT"){break;}
        getline(cin, str); 
        for(int i=0; i<str.length(); i++){
            char ch = str[i];
            if(ch>='A' && ch <='Z'){
                strout += psw[ch - 'A'];
            }else{
                strout += ch;
            }
        }
        cout << strout << endl;
        strout.clear();
        getline(cin, str); 
    }

    return 0;
}
