 /**
 * @brief: 4.3_31 有限制的选数
 * @link: https://sunnywhy.com/sfbj/4/3/140
 * @date: 2026-02-17 22:54:09
 */

//

#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> nums;
vector<int> choice;
set<vector<int> > ans;

void gen(int n, int l, int s, int t){
    l++;
    if(s>t || l>n){
        return;
    }
    if(s==t){
        ans.insert(choice);
    }
    s += nums[l-1];
    choice.push_back(l);
    gen(n, l, s, t);
    s -= nums[l-1];
    choice.pop_back();
    gen(n, l, s, t);
}

int main(){
    int n, k;
    cin >> n >> k;
    int stop = n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        if(temp>k){
            if(i<stop){stop = i;};
            continue;
        }
        nums.push_back(temp);
    }
    gen(stop+1, 0, 0, k);
    cout << ans.size() << endl;
    return 0;
}
