 /**
 * @brief: 2.4_1 自然数求和
 * @link: https://sunnywhy.com/sfbj/2/4
 * @date: 2026-01-21 15:12:38
 */

//

#include <iostream>
using namespace std;

//使用while
// int main(){
//     int n;
//     cin >> n;
//     int sum = 0;
//     while(n>0){
//         sum += n;
//         n--;
//     }
//     cout << sum << endl;
//     return 0;
// }


//使用do...while
// int main(){
//     int n;
//     cin >> n;
//     int sum = 0;
//     do{
//         sum += n;
//         n--;
//     }while(n>0);
//     cout << sum << endl;
//     return 0;
// }

//使用for
int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(; n > 0; n--){
        sum += n;
    }
    cout << sum << endl;
    return 0;
}