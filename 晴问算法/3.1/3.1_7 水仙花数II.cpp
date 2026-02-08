 /**
 * @brief: 3.1_7 水仙花数II
 * @link: https://sunnywhy.com/sfbj/3/1/60
 * @date: 2026-02-08 20:01:28
 */

//

#include <iostream>
using namespace std;

bool judge(int n){
    int target = n;
    int a = n % 10;
    n /= 10;
    int b = n % 10;
    n /= 10;
    return(a*a*a + b*b*b + n*n*n == target);
}

int main(){
    int a, b;
    cin >> a >> b;
    bool isFirst = true;
    while(a<=b){
        if(judge(a)){
            if(!isFirst){cout<< " ";}
            cout << a;
            isFirst = false;
        }
        a++;
    }
    if(isFirst){cout << "NO";}
    cout << endl;
    return 0;
}
