 /**
 * @brief: 4.1_1 简单选择排序
 * @link: https://sunnywhy.com/sfbj/4/1/86
 * @date: 2026-02-15 12:45:55
 */

//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end());
    for(int i=0; i<n; i++){
        if(i>0){cout << " ";}
        cout << nums[i];
    }
    cout << endl;
    return 0;
}
