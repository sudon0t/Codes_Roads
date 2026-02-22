 /**
 * @brief: 简单_KY130 ZOJ
 * @link: https://www.nowcoder.com/practice/7557d470617c464f9200d93acf721471
 * @date: 2026-02-22 11:00:42
 */

//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string str;
    int count[3] = {0, 0, 0};//Z, O, J
    cin >> str;
    int len = str.length();
    for(int i=0; i<len; i++){
        if(str[i]=='Z'){count[0]++;}
        if(str[i]=='O'){count[1]++;}
        if(str[i]=='J'){count[2]++;}
    }
    int index = 0;
    for(int i=0; i<len; i++){
        if(index%3==0){
            if(count[0]){
                count[0]--;
                cout << "Z";
            }else if(count[1]){
                count[1]--;
                cout << "O";
                index++;
            }else if(count[2]){
                count[2]--;
                cout << "J";
                index++;
            }
        }else if(index%3==1){
            if(count[1]){
                count[1]--;
                cout << "O";
            }else if(count[2]){
                count[2]--;
                cout << "J";
                index++;
            }else if(count[0]){
                count[0]--;
                cout << "Z";
                index++;
            }
        }else{
            if(count[2]){
                count[2]--;
                cout << "J";
            }else if(count[0]){
                count[0]--;
                cout << "Z";
                index++;
            }else if(count[1]){
                count[1]--;
                cout << "O";
                index++;
            }
        }
        index++;
    }
    
    return 0;
}
