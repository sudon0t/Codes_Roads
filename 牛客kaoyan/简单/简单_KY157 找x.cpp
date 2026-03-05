 /**
 * @brief: 简单_KY157 找x
 * @link: https://www.nowcoder.com/practice/069e2130430c41229ab25e47fa0949a6
 * @date: 2026-02-22 18:23:56
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        vector<int> nums;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            nums.push_back(temp);
        }
        int t;
        cin >> t;
        int i = n-1;
        for(; i>=0; i--){
            if(t == nums[i]){break;}
        }
        cout << i << endl;
    }
    return 0;
}
