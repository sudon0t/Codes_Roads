 /**
 * @brief: 2.5_7 字符串输入输出II
 * @link: https://sunnywhy.com/sfbj/2/5/32
 * @date: 2026-02-05 22:21:51
 */

//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    getchar();
    vector<string> strs;
    for(int i=0; i<n; i++){
        string str;
        getline(cin, str);
        strs.push_back(str);
    }
    for(int i=0; i<n; i++){
        cout << strs[i] << endl;
    }
    return 0;
}
