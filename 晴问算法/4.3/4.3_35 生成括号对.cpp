 /**
 * @brief: 4.3_35 生成括号对
 * @link: https://sunnywhy.com/sfbj/4/3/144
 * @date: 2026-02-23 23:52:55
 */

//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string series;
vector<string> ans;

void gen(int n, int l, int left){
    if(n==l){
        if(left==0){
            ans.push_back(series);
            return;
        }else{
            series.push_back(')');
            gen(n, l, left-1);
            series.pop_back();
        }
    }else{
        if(l==0){
            series.push_back('(');
            gen(n, 1, left+1);
        }else{//l>0
            series.push_back('(');
            gen(n, l+1, left+1);
            series.pop_back();
            if(left>0){
                series.push_back(')');
                gen(n, l, left-1);
                series.pop_back();
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    gen(n, 0, 0);
    for(auto it = ans.begin(); it != ans.end(); it++){
        cout << *it << endl;
    }
    return 0;
}
