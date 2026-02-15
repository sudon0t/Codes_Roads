 /**
 * @brief: 4.2_3 整数是否出现
 * @link: https://sunnywhy.com/sfbj/4/2/100
 * @date: 2026-02-15 14:27:29
 */

//

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    short s[1001];
    memset(s, 0, sizeof(s));
    for(int i=0; i<n; i++){
        int numin;
        cin >> numin;
        s[numin] = 1;
    }
    for(int i=0; i<m; i++){
        int numin;
        cin >> numin;
        if(i>0){cout << " ";}
        cout << s[numin];
    }
    cout <<endl;
    return 0;
}
