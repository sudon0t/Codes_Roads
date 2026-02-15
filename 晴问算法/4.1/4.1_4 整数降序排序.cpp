 /**
 * @brief: 4.1_4 整数降序排序
 * @link: https://sunnywhy.com/sfbj/4/1/89
 * @date: 2026-02-15 12:57:07
 */

//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end(), cmp);
    for(int i=0; i<n; i++){
        if(i>0){cout << " ";}
        cout << nums[i];
    }
    cout << endl;
    return 0;
}
