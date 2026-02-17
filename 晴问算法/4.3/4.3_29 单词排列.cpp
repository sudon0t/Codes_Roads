 /**
 * @brief: 4.3_29 单词排列
 * @link: https://sunnywhy.com/sfbj/4/3/138
 * @date: 2026-02-17 22:23:07
 */

//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> ans;
vector<bool> flags;
string strin;

void gen(int n, int l, string str){
    if(n==l){
        ans.push_back(str);
        return;
    }
    for(int i=0; i<n; i++){
        if(flags[i]){continue;}
        str += strin[i];
        flags[i] = true;
        gen(n, l+1, str);
        flags[i] = false;
        str.pop_back();
    }

}

int main(){
    cin >> strin;
    int len = strin.length();
    for(int i=0; i<len; i++){
        flags.push_back(false);
    }
    gen(len, 0, "");
    sort(ans.begin(), ans.end());
    for(vector<string>::iterator it = ans.begin(); it != ans.end(); it++){
        cout << *it << endl;
    }
    return 0;
}
