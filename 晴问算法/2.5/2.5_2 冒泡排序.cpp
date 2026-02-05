 /**
 * @brief: 2.5_2 冒泡排序
 * @link: https://sunnywhy.com/sfbj/2/5/27
 * @date: 2026-02-05 21:47:07
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    for(int i=1; i<n; i++){
        for(int j=n-1; j>=i; j--){
            if(j-1>=i && nums[j]<nums[j-1]){
                int temp = nums[j];
                nums[j] = nums[j-1];
                nums[j-1] = temp;
            }
        }
    }
    cout << nums[0];
    for(int i=0; i<n; i++){
        cout << " " << nums[i];
    }
    cout << endl;
    return 0;
}
