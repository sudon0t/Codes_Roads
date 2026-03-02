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
    string ans1, ans2, ans3;
    cin >> a >> b;
    int len1 = a.length();
    int len2 = b.length();

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
        a1 += a;
    }

    //add
    int carry = 0;
    for(int i=len1-1; i>=0; i--){
        int add = a1[i] - '0' + b1[i] - '0' + carry;
        if(add>10){
            carry = 1;
            add -= 10;
        }
        ans1 = char(add + '0') + ans1;
    }
    if(carry==1){ans1+='1';}
    cout << ans1;

    //sub
    // char sub = a1[0] - b1[0];
    // if(sub<0){
    //     ans2 = '-';
    //     sub += 10 + '0';
    // }
    // ans2 += sub;
    // for(int i=1; i<len1; i++){
    //     int sub = a1[i] - b1[i];
    //     if(sub < 0){
    //         char lastnum = ans2[ans2.length()-1];
    //         ans2.pop_back();
    //         ans2 += 
    //     }
    //     ans1 = char(add + '0') + ans1;
    // }
    // if(carry==1){ans1+='1';}
    return 0;
}
