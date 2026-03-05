 /**
 * @brief: 入门_KY131 xxx定律
 * @link: https://www.nowcoder.com/practice/75c189249d6145cfa33cd53edae6afc8
 * @date: 2026-02-18 16:48:17
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int count = 0;
        while(n!=1){
            if(n%2==0){n/=2;}
            else{n = (3 * n + 1) / 2;}
            count++;
        }
        cout << count << endl;
    }
    return 0;
}
