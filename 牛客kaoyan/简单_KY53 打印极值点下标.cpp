 /**
 * @brief: 简单_KY53 打印极值点下标
 * @link: https://www.nowcoder.com/practice/7fd72f8ac7964ba3b8baa8735246e1f1
 * @date: 2026-02-19 12:46:18
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        vector<int> nums;
        int temp;
        for(int i=0; i<n; i++){
            cin >> temp;
            nums.push_back(temp);
        }
        bool isFirst = true;
        if(nums[0]!=nums[1]){
            cout << 0;
            isFirst = false;
        }
        for(int i=1; i<n-1; i++){
            if((nums[i-1]<nums[i] && nums[i]>nums[i+1])||
            (nums[i-1]>nums[i] && nums[i]<nums[i+1])){
                if(!isFirst){cout << " ";}
                cout << i;
                isFirst = false;
            }
        }
        if(nums[n-1]!=nums[n-2]){
            if(!isFirst){cout << " ";}
            cout << n-1;
        }
        cout << endl;
    }
    return 0;
}
