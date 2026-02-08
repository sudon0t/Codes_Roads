 /**
 * @brief: 3.2_1 查找元素
 * @link: https://sunnywhy.com/sfbj/3/2
 * @date: 2026-02-08 20:46:19
 */

//

#include <iostream>
using namespace std;

int main(){
    int n, t;
    cin >> n;
    int a[n];
    int temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        a[i] = temp;
    }
    cin >> t;
    int ans = 0;
    for(int i=0; i<n; i++){
        if(a[i] == t){
            ans = i+1;
        }
    }
    if(ans){cout << ans << endl;}
    else{cout << "NO" << endl;}
    return 0;
}
