 /**
 * @brief: 2.4_7 逃离魔法塔底
 * @link: https://sunnywhy.com/sfbj/2/4/875
 * @date: 2026-01-21 15:48:38
 */

//

#include <iostream>
using namespace std;

int main(){
    int n, u, d;
    cin >> n >> u >> d;
    int count = 1;
    int h = u;
    while(h<n){
        count++;
        h += u - d;
    }
    cout << count;
    return 0;
}
