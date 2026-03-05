 /**
 * @brief: KY71 Digital Roots
 * @link: https://www.nowcoder.com/practice/cef727d0af33479c9fb4a9c120702414?tpId=40&tags=&title=&difficulty=1&judgeStatus=0&rp=1&sourceUrl=
 * @date: 2026-01-13 09:46:10
 */

//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int sum;
    int num;
    while(cin >> num){
        while(true){
            if (num <= 9){
                sum = num;
                break;
            }else{
                sum = 0;
                string str = to_string(num);
                int len = str.length();
                for(int i=0; i<len; i++){
                    sum += str[i] - '0';
                }
                if(sum<=9){
                    break;
                }else{
                    num = sum;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}


//更好的方法：sum不断加n模10，n不断除以10
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     while (cin >> n) {
//         while (n >= 10) {
//             int sum = 0;
//             while (n) {
//                 sum += n % 10;
//                 n /= 10;
//             }
//             n = sum;
//         }
//         cout << n << endl;
//     }
//     return 0;
// }