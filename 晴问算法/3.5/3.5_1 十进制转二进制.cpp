 /**
 * @brief: 3.5_1 十进制转二进制
 * @link: https://sunnywhy.com/sfbj/3/5
 * @date: 2026-02-14 16:00:04
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    vector<int> a;
    cin >> n;
    if(n==0){cout << "0";}
    while(n){
        a.push_back(n % 2);
        n /= 2;
    }
    for(int i=a.size()-1; i>=0; i--){
        cout << a[i];
    }
    cout << endl;
    return 0;
}
