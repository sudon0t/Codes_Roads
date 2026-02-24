 /**
 * @brief: 4.5_2 寻找指定元素II
 * @link: https://sunnywhy.com/sfbj/4/5/156
 * @date: 2026-02-24 18:35:10
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
