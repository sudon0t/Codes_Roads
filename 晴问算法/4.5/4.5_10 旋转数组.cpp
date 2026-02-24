 /**
 * @brief: 4.5_10 旋转数组
 * @link: https://sunnywhy.com/sfbj/4/5/164
 * @date: 2026-02-24 20:19:22
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    vector<int> v;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int i=n-1;
    for(; i>=0; i--){
        if(t == v[i]){
            break;
        }
    }
    cout << i << endl;
    return 0;
}
