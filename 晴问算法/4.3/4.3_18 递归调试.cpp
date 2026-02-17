 /**
 * @brief: 4.3_18 递归调试
 * @link: https://sunnywhy.com/sfbj/4/3/127
 * @date: 2026-02-17 19:41:20
 */

//

#include <iostream>
using namespace std;

void f(int n, int depth){
    for(int i=1; i<depth; i++){
        cout << "    ";
    }
    cout << "n=" << n << endl;
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
