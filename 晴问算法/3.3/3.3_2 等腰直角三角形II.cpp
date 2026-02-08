 /**
 * @brief: 3.3_2 等腰直角三角形II
 * @link: https://sunnywhy.com/sfbj/3/3/66
 * @date: 2026-02-08 21:12:30
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(j==0 || j==i-1){cout << "*";}
            else{cout << " ";}
        }
        cout << endl;
    }
    while(n--){
        cout << "*";
    }
    cout << endl;
    return 0;
}
