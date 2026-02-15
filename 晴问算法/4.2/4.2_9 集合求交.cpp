 /**
 * @brief: 4.2_9 集合求交
 * @link: https://sunnywhy.com/sfbj/4/2/106
 * @date: 2026-02-15 16:07:45
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<bool> flag(10001, false);
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        flag[num] = true;
    }
    bool isFirst = true;
    for(int i=0; i<m; i++){
        int num;
        cin >> num;
        if(flag[num]){
            if(!isFirst){cout << " ";}
            cout << num;
            isFirst = false;
        }
    }
    return 0;
}
