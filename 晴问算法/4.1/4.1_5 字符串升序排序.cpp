 /**
 * @brief: 4.1_5 字符串升序排序
 * @link: https://sunnywhy.com/sfbj/4/1/90
 * @date: 2026-02-15 12:58:31
 */

//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> strs;
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        strs.push_back(str);
    }
    sort(strs.begin(), strs.end());
    for(int i=0; i<n; i++){
        cout << strs[i] << endl;
    }
    return 0;
}
