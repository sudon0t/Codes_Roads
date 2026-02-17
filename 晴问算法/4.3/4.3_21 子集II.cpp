 /**
 * @brief: 4.3_21 子集II
 * @link: https://sunnywhy.com/sfbj/4/3/130
 * @date: 2026-02-17 20:34:48
 */

//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> ans;
vector<int> nums;

//n：输入的n    l：子集长度    num：当前序列长度    maxnum：当前最大数    str：当前str
void gen(int n, int l, int num, int maxnumindex, string str){
    if(l==num){
        ans.push_back(str);
        return;
    }
    if(num>=1){str+=" ";}
    for(int i=maxnumindex; i<n; i++){
        string add = to_string(nums[i]);
        str += add;
        gen(n, l, num+1, i+1, str);
        for(int j=0; j<add.length(); j++){
            str.pop_back();
        }
    }
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    cout << endl;
    for(int i=1; i<=n; i++){//长度n
        gen(n, i, 0, 0, "");
    }
    for(vector<string>::iterator it = ans.begin(); it != ans.end(); it++){
        cout << *it << endl;
    }
    return 0;
}
