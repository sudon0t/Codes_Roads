 /**
 * @brief: 4.3_20 子集I
 * @link: https://sunnywhy.com/sfbj/4/3/129
 * @date: 2026-02-17 20:03:14
 */

//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> ans;

//n：输入的n    l：子集长度    num：当前序列长度    maxnum：当前最大数    str：当前str
void gen(int n, int l, int num, int maxnum, string str){
    if(l==num){
        ans.push_back(str);
        return;
    }
    if(num>=1){str+=" ";}
    for(int i=maxnum; i<=n; i++){
        string add = to_string(i);
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
    cout << endl;
    for(int i=1; i<=n; i++){//长度n
        gen(n, i, 0, 1, "");
    }
    for(vector<string>::iterator it = ans.begin(); it != ans.end(); it++){
        cout << *it << endl;
    }
    return 0;
}
