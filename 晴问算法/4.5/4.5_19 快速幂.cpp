 /**
 * @brief: 4.5_19 快速幂
 * @link: https://sunnywhy.com/sfbj/4/5/173
 * @date: 2026-02-24 20:59:21
 */

//

#include <iostream>
using namespace std;

long cal(long a, long b){
    if(b==0){return 1;}
    if(b==1){return a;}
    if(b>1){
        if(b%2==0){
            b /= 2;
            return cal(a * a, b);
        }else{
            b /= 2;
            return a * cal(a * a, b);
        }
    }
}

int main(){
    long a, b;
    cin >> a >> b;
    cout << cal(a, b) << endl;
    return 0;
}
