 /**
 * @brief: 简单_KY80 Integer Inquiry
 * @link: https://www.nowcoder.com/practice/df03906024d742cc919a64c22983f5e1
 * @date: 2026-02-19 16:07:22
 */

//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1, str2;
    cin >> str1;
    while(cin >> str2){
        if(str2=="0"){break;}
        int max = str1.length()>str2.length()?str1.length():str2.length();
        while(str1.length()<max){
            str1 = "0" + str1;
        }
        while(str2.length()<max){
            str2 = "0" + str2;
        }
        int carry = 0;
        string rr;
        for(int i=max-1; i>=0; i--){
            char add =  str1[i] - '0' + str2[i] - '0' + carry;
            carry = 0;
            if(add>=10){
                carry = 1;
                add -= 10;
            }
            rr += (add + '0');
        }
        if(carry == 1){
            rr += '1';
        }
        str1 = "";
        for(int i=rr.length()-1; i>=0; i--){
            str1 += rr[i];
        }
    }
    cout << str1 << endl;
    return 0;
}