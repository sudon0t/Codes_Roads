 /**
 * @brief: 4.3_26 组合I
 * @link: https://sunnywhy.com/sfbj/4/3/135
 * @date: 2026-02-17 21:55:16
 */

//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<bool> flags;
vector<string> ans;

void gen(int n, int k, int l, int maxnum, string str){
    if(k==l){
        ans.push_back(str);
        return;
    }
    if(l>=1){str += " ";}
    for(int i=1+maxnum; i<=n; i++){
        if(flags[i]){continue;}
        flags[i] = true;
        string add = to_string(i);
        str += add;
        gen(n, k, l+1, i, str);
        int len = add.length();
        while(len--){
            str.pop_back();
        }
        flags[i] = false;
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    for(int i=0; i<=n; i++){
        flags.push_back(false);
    }
    gen(n, k, 0, 0, "");
    for(vector<string>::iterator it = ans.begin(); it != ans.end(); it++){
        cout << *it << endl;
    }
    return 0;
}
