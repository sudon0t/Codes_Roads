 /**
 * @brief: 4.3_17 递归深度
 * @link: https://sunnywhy.com/sfbj/4/3/126
 * @date: 2026-02-17 19:38:06
 */

//

#include <iostream>
using namespace std;

void f(int n, int depth){
    cout << depth << endl;
    if(n==1 || n==2){
        return;
    }else{
        f(n-1, depth+1);
        f(n-2, depth+1);
    }
}

int main(){
    int n;
    cin >> n;
    f(n, 1);
    return 0;
}
