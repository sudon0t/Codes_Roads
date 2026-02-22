 /**
 * @brief: 简单_KY102 2的幂次方
 * @link: https://www.nowcoder.com/practice/7cf7b0706d7e4b439481f53e5fdac6e7
 * @date: 2026-02-21 12:11:59
 */

//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string getans(int n){
    if(n==0){
        return "0";
    }else{
        string str = "";
        vector<int> r;
        for(int i=15; i>=0; i--){
            if((n & (1 << i)) != 0){
                r.push_back(i);
            }
        }
        for(int i=0; i<r.size(); i++){
            if(i>0){
                str += "+";
            }
            if(r[i] == 1){
                str += "2";
            }else{
                str += "2(" + getans(r[i]) + ")";
            }
        }
        return str;
    }
}

int main(){
    int n;
    cin >> n;
    cout << getans(n) << endl;
    return 0;
}
