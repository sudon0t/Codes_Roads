 /**
 * @brief: 4.2_7 2-SUM-hash
 * @link: https://sunnywhy.com/sfbj/4/2/104
 * @date: 2026-02-15 14:48:17
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    vector<bool> flag(1000010, false);
    vector<int> a;
    for(int i=0; i<n; i++){
        int numin;
        cin >> numin;
        a.push_back(numin);
        flag[numin] = true;
    }
    int count = 0;
    for(int i=0; i<n; i++){
        if(flag[t - a[i]]){
            count++;
        }
    }
    cout << count / 2;
    return 0;
}
