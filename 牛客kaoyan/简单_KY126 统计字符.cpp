 /**
 * @brief: 简单_KY126 统计字符
 * @link: https://www.nowcoder.com/practice/4ec4325634634193a7cd6798037697a8
 * @date: 2026-02-22 10:43:09
 */

//

#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;

int main(){
    string str;
    while(getline(cin, str)){
        if(str == "#"){break;}
        int len = str.length();
        vector<pair<char, int> > chs;
        for(int i=0; i<str.length(); i++){
            chs.push_back(pair<char, int>(str[i], 0));
        }
        getline(cin, str);
        for(int i=0; i<str.length(); i++){
            for(int j=0; j<len; j++){
                if(chs[j].first == str[i]){
                    chs[j].second++;
                }
            }
        }
        for(int j=0; j<len; j++){
            cout << chs[j].first << " " << chs[j].second << endl;
        }
        str.clear();
    }
    return 0;
}
