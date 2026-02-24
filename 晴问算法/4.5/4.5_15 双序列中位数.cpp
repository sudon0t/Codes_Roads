 /**
 * @brief: 4.5_15 双序列中位数
 * @link: https://sunnywhy.com/sfbj/4/5/169
 * @date: 2026-02-24 20:39:04
 */

//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    n += m;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    sort(nums.begin(), nums.end());
    if(n%2==0){
        printf("%.1f\n", (nums[n/2] + nums[n/2-1]) / 2.0);
    }else{
        printf("%.1f\n", nums[n/2] * 1.0);
    }
    return 0;
}