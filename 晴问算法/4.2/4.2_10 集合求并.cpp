 /**
 * @brief: 4.2_10 集合求并
 * @link: https://sunnywhy.com/sfbj/4/2/107
 * @date: 2026-02-15 16:15:34
 */

//

#include <iostream>
#include <set>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    set<int> nums;
    for(int i=0; i<n+m; i++){
        int num;
        cin >> num;
        nums.insert(num);
    }
    set<int>::iterator it = nums.begin();
    cout << *it;
    it++;
    for (; it != nums.end(); ++it) {
        cout << " " << *it;
    }
    return 0;
}
