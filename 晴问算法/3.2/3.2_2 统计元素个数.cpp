 /**
 * @brief: 3.2_2 统计元素个数
 * @link: https://sunnywhy.com/sfbj/3/2/63
 * @date: 2026-02-08 20:54:32
 */


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
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
