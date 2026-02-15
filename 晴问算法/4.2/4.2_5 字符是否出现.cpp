 /**
 * @brief: 4.2_5 字符是否出现
 * @link: https://sunnywhy.com/sfbj/4/2/102
 * @date: 2026-02-15 14:39:46
 */

//

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    short count[26];
    memset(count, 0, sizeof(count));
    int len1 = str1.length();
    int len2 = str2.length();
    for(int i=0; i<len1; i++){
        count[str1[i]-'a'] = 1;
    }
    cout << count[str2[0]-'a'];
    for(int i=1; i<len2; i++){
        cout << " " << count[str2[i]-'a'];
    }
    cout << endl;
    return 0;
}
