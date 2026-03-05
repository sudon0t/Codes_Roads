 /**
 * @brief: 入门_KY114 后缀子串排序
 * @link: https://www.nowcoder.com/practice/f89f96ea3145418b8e6c3eb75773f65a
 * @date: 2026-02-18 11:48:14
 */

//

#include <iostream>
#include <set>
using namespace std;

int main(){
    string str;
    cin >> str;
    set<string> strs;
    int len = str.length();
    for(int i=0; i<len; i++){
        string temp = str.substr(i, len-i);
        strs.insert(temp);
    }
    for(auto it = strs.begin(); it != strs.end(); it++){
        cout << *it << endl;
    }
    return 0;
}
