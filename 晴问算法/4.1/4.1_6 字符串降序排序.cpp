 /**
 * @brief: 4.1_6 字符串降序排序
 * @link: https://sunnywhy.com/sfbj/4/1/91
 * @date: 2026-02-15 13:02:28
 */

//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool cmp(string a, string b){
    return a>b;
}
int main(){
    int n;
    cin >> n;
    vector<string> strs;
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        strs.push_back(str);
    }
    sort(strs.begin(), strs.end(), cmp);
    for(int i=0; i<n; i++){
        cout << strs[i] << endl;
    }
    return 0;
}
