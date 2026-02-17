 /**
 * @brief: 4.3_6 斐波拉契数列
 * @link: https://sunnywhy.com/sfbj/4/3/115
 * @date: 2026-02-15 21:46:46
 */

//

#include <iostream>
using namespace std;

int f(int n){
    if(n==1 || n==2){
        return 1;
    }else{
        return f(n-1)+f(n-2);
    }
}

int main(){
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
