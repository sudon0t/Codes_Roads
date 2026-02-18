 /**
 * @brief: 简单_KY17 特殊乘法
 * @link: https://www.nowcoder.com/practice/a5edebf0622045468436c74c3a34240f
 * @date: 2026-02-18 19:30:22
 */

//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    int len1 = str1.length();
    int len2 = str2.length();
    long long ans = 0;
    for(int i=0; i<len1; i++){
        for(int j=0; j<len2; j++){
            ans += (str1[i] - '0') * (str2[j] - '0');
        }
    }
    cout << ans;
    return 0;
}
