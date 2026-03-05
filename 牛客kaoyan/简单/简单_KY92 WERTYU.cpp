 /**
 * @brief: 简单_KY92 WERTYU
 * @link: https://www.nowcoder.com/practice/0f318e6fffe3490cb700e16b65a93b1b
 * @date: 2026-02-20 21:58:11
 */

//

#include <iostream>
#include <string>
#include <utility>
#include <map>
using namespace std;

int main(){

    // string str1 = "QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,.`1234567890-";
    // string str2 = "WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./1234567890-=";
    // map<char, char> chmap;
    // chmap.insert(pair<char, char>('a', 'b'));
    // string strin;
    // int n = 32;
    // while(n--){
    //     cout << "{'" << str2[n-1] << "', '" << str1[n-1] << "'}, ";
    // }

    map<char, char> chmap = 
    {
    {'/', '.'}, {'.', ','}, {',', 'M'}, {'M', 'N'}, {'N', 'B'}, {'B', 'V'},
    {'V', 'C'}, {'C', 'X'}, {'X', 'Z'}, {'\'', ';'}, {';', 'L'}, {'L', 'K'}, 
    {'K', 'J'}, {'J', 'H'}, {'H', 'G'}, {'G', 'F'}, {'F', 'D'}, {'D', 'S'}, 
    {'S', 'A'}, {'\\', ']'}, {']', '['}, {'[', 'P'}, {'P', 'O'}, {'O', 'I'}, 
    {'I', 'U'}, {'U', 'Y'}, {'Y', 'T'}, {'T', 'R'}, {'R', 'E'}, {'E', 'W'}, 
    {'W', 'Q'}, {' ', ' '}, {'=', '-'}, {'-', '0'}, {'0', '9'}, {'9', '8'}, 
    {'8', '7'}, {'7', '6'}, {'6', '5'}, {'5', '4'}, {'4', '3'}, {'3', '2'}, 
    {'2', '1'}, {'1', '`'}, 
    };
    string strin, strout;
    getline(cin, strin);
    for(int i=0; i<strin.length(); i++){
        strout += chmap[strin[i]];
    }
    cout << strout << endl;
    return 0;
}
