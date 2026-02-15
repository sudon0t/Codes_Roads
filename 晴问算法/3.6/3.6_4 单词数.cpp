 /**
 * @brief: 3.6_4 单词数
 * @link: https://sunnywhy.com/sfbj/3/6/81
 * @date: 2026-02-14 17:36:52
 */

//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string str;
    vector<string> strs;
    while(cin >> str){
        strs.push_back(str);
    }

    cout << strs.size() << endl;
    return 0;
}