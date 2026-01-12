 /**
 * @brief: KY14 abc
 * @link: 
 * @date: 2026-01-13 00:10:13
 */

// 第一版：
// #include <iostream>
// using namespace std;

// int main() {
//     for (int c = 0; c <= 9; c++) {
//         for (int b = 0; b <= 9; b++) {
//             int a2 = 100 * b + 10 * c + c;
//             for (int a = 0; a <= 9; a++) {
//                 int a1 = 100 * a + 10 * b + c;
//                 if (a1 + a2 == 532){
//                     cout << a << " " <<  b <<  " " <<  c <<  endl;
//                 }
//                 }
//         }
//     }
//     return 0;
// }


// 第二版：改进跑出结果后，直接打表：

#include <iostream>
using namespace std;

int main() {
    cout << "3 2 1" << endl;
    return 0;
}
