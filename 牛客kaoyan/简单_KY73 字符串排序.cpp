 /**
 * @brief: 简单_KY73 字符串排序
 * @link: https://www.nowcoder.com/practice/cc2291ab56ee4e919efef2f4d2473bac
 * @date: 2026-02-19 15:25:07
 */

//

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    string str;
    while(cin >> str){
        int len = str.length();
        multiset<char> ms;
        for(int i=0; i<len; i++){
            ms.insert(str[i]);
        }
        for(auto it = ms.begin(); it != ms.end(); it++){
            cout << *it;
        }
    }
    return 0;
}
