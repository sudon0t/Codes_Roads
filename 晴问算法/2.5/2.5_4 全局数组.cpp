 /**
 * @brief: 2.5_4 全局数组
 * @link: 
 * @date: 2026-02-05 22:11:13
 */

//


#include <iostream>
#include <vector>
using namespace std;

unsigned int n;
vector<short> nums;

int main(){
    cin >> n;
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
