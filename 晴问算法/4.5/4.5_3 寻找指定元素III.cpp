 /**
 * @brief: 4.5_3 寻找指定元素III
 * @link: https://sunnywhy.com/sfbj/4/5/157
 * @date: 2026-02-24 18:36:04
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
    int i=0;
    for(; i<n; i++){
        if(v[i] >= t){
            break;
        }
    }
    cout << i << endl;
    return 0;
}
