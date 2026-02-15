 /**
 * @brief: 4.1_3 整数升序排序
 * @link: https://sunnywhy.com/sfbj/4/1/88
 * @date: 2026-02-15 12:56:37
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
