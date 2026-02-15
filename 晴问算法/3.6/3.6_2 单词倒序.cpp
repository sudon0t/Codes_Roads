 /**
 * @brief: 3.6_2 单词倒序
 * @link: https://sunnywhy.com/sfbj/3/6/79
 * @date: 2026-02-14 17:08:28
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
    cout << strs[strs.size()-1];
    for(int i=strs.size()-2; i>=0; i--){
        cout << " " << strs[i];
    }
    cout << endl;
    return 0;
}
