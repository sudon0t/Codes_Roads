 /**
 * @brief: 4.3_9 上楼
 * @link: https://sunnywhy.com/sfbj/4/3/118
 * @date: 2026-02-15 22:12:01
 */

//

#include <iostream>
using namespace std;

int f(int n){
    if(n==0){return 0;}
    else if(n==1){return 1;}
    else if(n==2){return 2;}
    else{
        return f(n-1) + f(n-2);
    }
}

int main(){
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
