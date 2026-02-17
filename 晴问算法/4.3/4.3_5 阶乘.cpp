 /**
 * @brief: 4.3_5 阶乘
 * @link: https://sunnywhy.com/sfbj/4/3/114
 * @date: 2026-02-15 21:45:29
 */

//

#include <iostream>
using namespace std;

int f(int n){
    if(n==1 || n==0){
        return 1;
    }else{
        return n*f(n-1);
    }
}

int main(){
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
