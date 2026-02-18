 /**
 * @brief: 入门_KY167 字符串内排序
 * @link: https://www.nowcoder.com/practice/cc2291ab56ee4e919efef2f4d2473bac
 * @date: 2026-02-18 16:52:26
 */

//

#include <iostream>
#include <vector>
using namespace std;

vector<unsigned short> nums;
vector<unsigned short> choice;
vector<vector<unsigned short> > ans;

void gen(unsigned short n, unsigned short l, unsigned short s){
    if(s>40 || l>n){
        return;
    }
    if(s==40){
        ans.push_back(choice);
        return;
    }
    s += nums[l];
    choice.push_back(l);
    gen(n, l+1, s);
    s -= nums[l];
    choice.pop_back();
    gen(n, l+1, s);
}

int main(){
    unsigned short n;
    cin >> n;
    for(unsigned short i=0; i<n; i++){
        unsigned short temp;
        cin >> temp;
        nums.push_back(temp);
    }
    gen(n, 0, 0);
    cout << ans.size() << endl;
    return 0;
}
