 /**
 * @brief: 简单_KY67 子串计算
 * @link: https://www.nowcoder.com/practice/bcad754c91a54994be31a239996e7c11
 * @date: 2026-02-19 15:10:20
 */

//

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    string str;
    cin >> str;
    int len = str.length();
    map<string, int> m;
    for(int i=1; i<=len; i++){
        for(int begin=0; begin<len-i+1; begin++){
            string sub = str.substr(begin, i);
            m[sub]++;
        }
    }
    for(auto it = m.begin(); it != m.end(); it++){
        if(it->second>1){
            cout << it->first << " " << it->second << endl;
        }
    }
    return 0;
}
