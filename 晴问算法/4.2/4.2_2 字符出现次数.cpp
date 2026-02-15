 /**
 * @brief: 4.2_2 字符出现次数
 * @link: https://sunnywhy.com/sfbj/4/2/99
 * @date: 2026-02-15 14:23:39
 */

//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string str;
    cin >> str;
    vector<int> count(30, 0);
    int len = str.length();
    for(int i=0; i<len; i++){
        count[str[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(count[i]){
            cout << char('a' + i) << " " << count[i] << endl;
        }
    }
    return 0;
}
