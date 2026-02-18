 /**
 * @brief: 入门_KY100 Powerful Calculator
 * @link: https://www.nowcoder.com/practice/6bc1dd2ee0ce4257821531719b8d1c83
 * @date: 2026-02-18 10:57:11
 */

//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a, b;
    string rans1, rans2, rans3;
    cin >> a >> b;
    int len1 = a.length();
    int len2 = b.length();

    for(int i=0; i<len1; i++){
        int add = a[i] - '0' + b[i] - '0' + carry;
        if(add>10){
            carry = 1;
            add -= 10;
        }
        rans1 += add + '0';
    }
    string a1, b1;
    if(len1>len2){
        int diff = len1 - len2;
            a1 = a;
        for(int i=0; i<diff; i++){
            b1 += '0';
        }
        b1 += b;
    }else{
        int diff = len1 - len2;
            b1 = b;
        for(int i=0; i<diff; i++){
            a1 += '0';
        }
        a1 += b;
    }
    int carry = 0;
    for(int i=0; i<len1; i++){
        int add = a1[i] - '0' + b1[i] - '0' + carry;
        if(add>10){
            carry = 1;
            add -= 10;
        }
        rans1 += add + '0';
    }
    if(carry==1){rans1+='1';}
    

    return 0;
}
