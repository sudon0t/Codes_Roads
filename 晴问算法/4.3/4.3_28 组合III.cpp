 /**
 * @brief: 4.3_28 组合III
 * @link: https://sunnywhy.com/sfbj/4/3/137
 * @date: 2026-02-17 22:20:34
 */

//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<bool> flags;
vector<int> nums;
vector<string> ans;

void gen(int n, int k, int l, int maxnum, string str){
    if(k==l){
        auto it = find(ans.begin(), ans.end(), str);
        if(it==ans.end()){
            ans.push_back(str);
        }
        return;
    }
    if(l>=1){str += " ";}
    for(int i=1+maxnum; i<=n; i++){
        if(flags[i]){continue;}
        flags[i] = true;
        string add = to_string(nums[i]);
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
    flags.push_back(false);
    nums.push_back(0);
    for(int i=1; i<=n; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
        flags.push_back(false);
    }
    gen(n, k, 0, 0, "");
    for(vector<string>::iterator it = ans.begin(); it != ans.end(); it++){
        cout << *it << endl;
    }
    return 0;
}
