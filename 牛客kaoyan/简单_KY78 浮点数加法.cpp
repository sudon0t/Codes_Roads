 /**
 * @brief: 简单_KY78 浮点数加法
 * @link: nowcoder.com/practice/ddec753f446e4ba4944e35378ba635c8
 * @date: 2026-02-19 15:26:04
 */

//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1, str2;
    cin >> str1 >> str2;
    int p1 = str1.find('.');
    int p2 = str2.find('.');
    string str11 = str1.substr(0, p1);
    string str12 = str1.substr(p1+1);
    string str21 = str2.substr(0, p2);
    string str22 = str2.substr(p2+1);
    int max1 = str11.length()>str21.length()?str11.length():str21.length();
    int max2 = str12.length()>str22.length()?str12.length():str22.length();
    while(str11.length()<max1){
        str11 = "0" + str11;
    }
    while(str21.length()<max1){
        str21 = "0" + str21;
    }
    while(str12.length()<max2){
        str12 += "0";
    }
    while(str22.length()<max2){
        str22 += "0";
    }
    // cout << str11 << '.' << str12 << endl;
    // cout << str21 << '.' << str22 << endl;
    int carry = 0;
    string rr1, rr2;
    for(int i=max2-1; i>=0; i--){
        char add =  str12[i] - '0' + str22[i] - '0' + carry;
        carry = 0;
        if(add>=10){
            carry = 1;
            add -= 10;
        }
        rr2 += (add + '0');
    }
    for(int i=max1-1; i>=0; i--){
        char add =  str11[i] - '0' + str21[i] - '0' + carry;
        carry = 0;
        if(add>=10){
            carry = 1;
            add -= 10;
        }
        rr1 += (add + '0');
    }
    if(carry == 1){
        rr1 += '1';
    }
    for(int i=rr1.length()-1; i>=0; i--){
        cout << rr1[i];
    }
    cout << '.';
    for(int i=rr2.length()-1; i>=0; i--){
        cout << rr2[i];
    }
    return 0;
}
