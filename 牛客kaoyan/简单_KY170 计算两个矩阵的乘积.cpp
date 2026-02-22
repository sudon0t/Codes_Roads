 /**
 * @brief: 简单_KY170 计算两个矩阵的乘积
 * @link: https://www.nowcoder.com/practice/ed6552d03e624ba58d16af6d57e1c3e9
 * @date: 2026-02-22 19:30:11
 */

//

#include <iostream>
using namespace std;

int main(){
    int a[13];
    for(int i=1; i<=12; i++){
        int temp;
        cin >> temp;
        a[i] = temp;
    }
    cout << a[1]*a[7] + a[2]*a[9] + a[3]*a[11] << " " 
         << a[1]*a[8] + a[2]*a[10] + a[3]*a[12] << endl;
    cout << a[4]*a[7] + a[5]*a[9] + a[6]*a[11] << " "
         << a[4]*a[8] + a[5]*a[10] + a[6]*a[12] << endl;
    
    return 0;
}
