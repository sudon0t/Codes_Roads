 /**
 * @brief: 简单_KY112 字母统计
 * @link: https://www.nowcoder.com/practice/de7bf0945c1c4bd1aa9d49573b831f3c
 * @date: 2026-02-21 16:23:41
 */

//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string str;
    vector<int> count(26,0);
    getline(cin, str);
    int len = str.length();
    for(int i=0; i<len; i++){
        if(str[i]>='A' && str[i]<='Z'){
            count[str[i]-'A']++;
        }
    }
    for(int i=0; i<26; i++){
        cout << char('A' + i) << ":" << count[i] << endl;
    }
    
    return 0;
}
