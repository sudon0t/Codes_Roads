 /**
 * @brief: 简单_KY212 奇偶校验
 * @link: https://www.nowcoder.com/practice/729d11d043d8448e83befa1410b694fe
 * @date: 2026-02-22 23:15:01
 */

//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string str;
    while(cin >> str){
        int len = str.length();
        for(int i=0; i<len; i++){
            vector<int> v;
            int num = str[i];
            int count = 0;
            for(int j=0; j<8; j++){
                int bit = (num & (1<<j)) >> j;
                count += bit;
                v.push_back(bit);
            }
            if(count%2==0){v[7]=1;}
            for(int j=7; j>=0; j--){
                cout << v[j];
            }
            cout << endl;
        }
    }
    return 0;
}
