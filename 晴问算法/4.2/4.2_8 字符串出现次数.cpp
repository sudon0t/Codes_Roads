 /**
 * @brief: 4.2_8 字符串出现次数
 * @link: https://sunnywhy.com/sfbj/4/2/105
 * @date: 2026-02-15 15:13:56
 */

//

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    int n, m;
    unordered_map<string, int> um;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        um[s]++; 
    }
    cin >> m;
    for(int i=0; i<m; i++){
        string q;
        cin >> q;
        if(i){cout << " ";}
        cout << um[q];
    }
    return 0;
}
