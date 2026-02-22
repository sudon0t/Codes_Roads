 /**
 * @brief: 简单_KY90 String Matching
 * @link: https://www.nowcoder.com/practice/00438b0bc9384ceeb65613346b42e88a
 * @date: 2026-02-20 21:41:31
 */

//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1, str2;
    cin >> str1 >> str2;
    int offset = 0;
    int ans = 0;
    int a = 1000;
    while(a--){
        str1 = str1.substr(offset, str1.length()-offset);
        int n = str1.find(str2);
        if(n != str1.npos){
            ans++;
            offset = n+1;
        }else{
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
