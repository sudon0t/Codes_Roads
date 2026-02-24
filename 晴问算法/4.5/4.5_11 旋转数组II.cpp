 /**
 * @brief: 4.5_11 旋转数组II
 * @link: https://sunnywhy.com/sfbj/4/5/165
 * @date: 2026-02-24 20:19:43
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
        if(v[i] == t){
            break;
        }
    }
    if(i==n){cout << "-1";}
    else{cout << i << endl;}
    return 0;
}
