 /**
 * @brief: 4.3_10 汉诺塔
 * @link: https://sunnywhy.com/sfbj/4/3/119
 * @date: 2026-02-15 22:14:52
 */

//

#include <iostream>
#include <cmath>
using namespace std;

void f(int n, char t1, char t2, char t3){
    if(n==1){
        cout << t1 << "->" << t2 << endl;
    }else if(n>1){
        f(n-1, t1, t3, t2);
        cout << t1 << "->" << t2 << endl;
        f(n-1, t3, t2, t1);
    }
}

int main(){
    int n;
    cin >> n;
    cout << (int)pow(2.0, 1.0 * n) - 1 << endl;
    f(n, 'A', 'C', 'B');
    return 0;
}
