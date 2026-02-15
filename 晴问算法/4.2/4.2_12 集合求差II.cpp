 /**
 * @brief: 4.2_12 集合求差II
 * @link: https://sunnywhy.com/sfbj/4/2/109
 * @date: 2026-02-15 16:26:59
 */

//

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    int n, m;
    map<int, int> nums;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        if(nums.find(num) != nums.end()){
            nums[num]++; 
        }else{
            nums.insert(pair<int, int> (num, 1));
        }
    }
    for(int i=0; i<m; i++){
        int num;
        cin >> num;
        if(nums.find(num) != nums.end() && nums[num] > 0){
            nums[num]--;
        }
    }
    bool isFirst = true;
    for(map<int, int>::iterator it = nums.begin(); it != nums.end(); ++it) {
        int len = it->second;
        if(len > 0){
            for(int i=0; i<len; i++){
                if(!isFirst){cout << " ";}
                isFirst = false;
                cout << it->first;
            }
        }
    }
    return 0;
}
