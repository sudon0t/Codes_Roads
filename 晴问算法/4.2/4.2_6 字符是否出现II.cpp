 /**
 * @brief: 4.2_6 字符是否出现II
 * @link: https://sunnywhy.com/sfbj/4/2/103
 * @date: 2026-02-15 14:45:47
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
    short count[128];
    memset(count, 0, sizeof(count));
    int len1 = str1.length();
    int len2 = str2.length();
    for(int i=0; i<len1; i++){
        count[str1[i]] = 1;
    }
    cout << count[str2[0]];
    for(int i=1; i<len2; i++){
        cout << " " << count[str2[i]];
    }
    cout << endl;
    return 0;
}
