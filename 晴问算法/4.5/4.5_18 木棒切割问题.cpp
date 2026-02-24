 /**
 * @brief: 4.5_18 木棒切割问题
 * @link: https://sunnywhy.com/sfbj/4/5/172
 * @date: 2026-02-24 20:45:01
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int ans = 0;
    long total = 0;
    int min = 100000;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
        total += temp;
        if(temp < min){
            min = temp;
        }
    }
    int count = total / k;
    for(int i=1; i<=count; i++){
        int now = 0;
        for(int j=0; j<n; j++){
            now += nums[j]/i;
        }
        if(now>=k){ans = i;}
    }
    cout << ans << endl;
    return 0;
}
