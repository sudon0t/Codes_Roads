 /**
 * @brief: 2.5_1 一维数组输入输出
 * @link: https://sunnywhy.com/sfbj/2/5
 * @date: 2026-02-05 21:39:56
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
    cout << nums[0];
    for(int i=1; i<n; i++){
        cout << " ";
        cout << nums[i];
    }
    cout << endl;
    return 0;
}
