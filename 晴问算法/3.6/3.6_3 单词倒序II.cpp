 /**
 * @brief: 3.6_3 单词倒序II
 * @link: https://sunnywhy.com/sfbj/3/6/80
 * @date: 2026-02-14 17:12:27
 */

//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void out(string str){
    for(int i=str.length()-1; i>=0; i--){
        cout << str[i];
    }
}

int main(){
    string str;
    vector<string> strs;
    while(cin >> str){
        strs.push_back(str);
    }
    out(strs[0]);
    for(int i=1; i<strs.size(); i++){
        cout << " ";
        out(strs[i]);
    }
    cout << endl;
    return 0;
}
