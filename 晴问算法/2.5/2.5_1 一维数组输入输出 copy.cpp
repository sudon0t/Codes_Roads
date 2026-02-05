 /**
 * @brief: 2.5_1 一维数组输入输出
 * @link: https://sunnywhy.com/sfbj/2/5
 * @date: 2026-02-05 21:39:56
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
