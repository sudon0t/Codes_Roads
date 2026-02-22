 /**
 * @brief: 简单_KY177 数字之和
 * @link: https://www.nowcoder.com/practice/ae759916631f4711a90c4d4d9657f4b0
 * @date: 2026-02-22 22:57:49
 */

//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        string str1 = to_string(n);
        string str2 = to_string(n*n);
        int sum1 = 0, sum2 = 0;
        for(int i=0; i<str1.length(); i++){
            int temp = str1[i] - '0';
            sum1 += temp;
        }
        for(int i=0; i<str2.length(); i++){
            int temp = str2[i] - '0';
            sum2 += temp;
        }
        cout << sum1 << " " << sum2 << endl;
    }
    return 0;
}
