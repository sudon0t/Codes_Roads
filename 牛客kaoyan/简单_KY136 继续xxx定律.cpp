 /**
 * @brief: 简单_KY136 继续xxx定律
 * @link: https://www.nowcoder.com/practice/9cc1055241c547269f58fa8b009e335d
 * @date: 2026-02-22 15:18:04
 */

//

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n==0){break;}
        vector<int> nums;
        unordered_set<int> test;
        vector<bool> flags(n, true);
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            nums.push_back(temp);
        }
        for(int i=0; i<n; i++){
            if(flags[i] == false){continue;}
            int now = nums[i];
            while(now!=1){
                test.insert(now);
                if(now%2==0){now/=2;}
                else{now = (3 * now + 1) / 2;}
            }
            for(int j=0; j<n; j++){
                if(i==j || flags[j] == false){continue;}
                if(test.find(nums[j])!=test.end()){
                    flags[j] = false;
                }
            }
            test.clear();
        }
        bool isFirst = true;
        for(int i=n-1; i>=0; i--){
            if(flags[i]){
                if(!isFirst){cout << " ";}
                cout << nums[i];
                isFirst = false;
            }
        }
        cout << endl;
    }
    return 0;
}
