 /**
 * @brief: 4.2_1 整数出现次数
 * @link: https://sunnywhy.com/sfbj/4/2
 * @date: 2026-02-15 14:16:06
 */

//

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    int n;
    cin >> n;
    int numin;
    set<int> nums;
    vector<int> count(1010, 0);
    for(int i=0; i<n; i++){
        cin >> numin;
        nums.insert(numin);
        count[numin]++;
    }
    for(set<int>::iterator it = nums.begin(); it != nums.end(); it++){
        cout << *it << " " << count[*it] << endl;
    }
    
    return 0;
}
