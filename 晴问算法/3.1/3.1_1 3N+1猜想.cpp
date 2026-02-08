 /**
 * @brief: 3.1_1 3N+1猜想
 * @link: https://sunnywhy.com/sfbj/3/1
 * @date: 2026-02-08 19:39:21
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    while(n!=1){
        if(n%2==0){n/=2;}
        else{n = (3 * n + 1) / 2;}
        count++;
    }
    cout << count << endl;
    return 0;
}
