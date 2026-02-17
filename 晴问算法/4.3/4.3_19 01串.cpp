 /**
 * @brief: 4.3_19 01串
 * @link: https://sunnywhy.com/sfbj/4/3/128
 * @date: 2026-02-17 19:43:57
 */

//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> ans;

void gen(int n, int l, string str){
    if(n==l){
        ans.push_back(str);
        return;
    }
    str += "0";
    gen(n, l+1, str);
    str.pop_back();
    str += "1";
    gen(n, l+1, str);
    str.pop_back();
}

int main(){
    int n;
    cin >> n;
    gen(n, 0, "");
    for(vector<string>::iterator it = ans.begin(); it != ans.end(); it++){
        cout << *it << endl;
    }
    return 0;
}
