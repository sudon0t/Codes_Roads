 /**
 * @brief: 4.3_24 全排列II
 * @link: https://sunnywhy.com/sfbj/4/3/133
 * @date: 2026-02-17 21:49:10
 */

//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> ans;
vector<bool> flags;
vector<int> nums;

void gen(int n, int l, string str){
    if(n==l){
        ans.push_back(str);
        return;
    }
    if(l>=1){str += " ";}
    for(int i=1; i<=n; i++){
        if(flags[i]==true){continue;}
        string add = to_string(nums[i]);
        str += add;
        flags[i]=true;
        gen(n, l+1, str);
        flags[i]=false;
        int len = add.length();
        while(len--){
            str.pop_back();
        }
    }
}

int main(){
    int n;
    cin >> n;
    nums.push_back(0);
    for(int i=0; i<=n; i++){
        int temp;
        cin >> temp;
        flags.push_back(false);
        nums.push_back(temp);
    }
    gen(n, 0, "");
    for(vector<string>::iterator it = ans.begin(); it != ans.end(); it++){
        cout << *it << endl;
    }
    return 0;
}
