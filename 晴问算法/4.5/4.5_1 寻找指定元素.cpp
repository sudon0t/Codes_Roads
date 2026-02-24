 /**
 * @brief: 4.5_1 寻找指定元素
 * @link: https://sunnywhy.com/sfbj/4/5/155
 * @date: 2026-02-24 18:32:55
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
