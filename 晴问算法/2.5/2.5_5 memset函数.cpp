 /**
 * @brief: 2.5_5 memset函数
 * @link: https://sunnywhy.com/sfbj/2/5/30
 * @date: 2026-02-05 22:13:54
 */

//

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int x;
    cin >> x;
    int A[2];
    memset(A, x, sizeof(A));
    cout << A[0];
    return 0;
}
