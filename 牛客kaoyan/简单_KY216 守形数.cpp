 /**
 * @brief: 简单_KY216 守形数
 * @link: https://www.nowcoder.com/practice/99e403f8342b4d0e82f1c1395ba62d7b
 * @date: 2026-02-22 23:29:00
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
        if(str2.substr(str2.length() - str1.length())==str1){
            cout << "Yes!" << endl;
        }else{
            cout << "No!" << endl;
        }
    }
    return 0;
}
