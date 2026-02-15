 /**
 * @brief: 4.2_11 集合求差
 * @link: https://sunnywhy.com/sfbj/4/2/108
 * @date: 2026-02-15 16:20:06
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<bool> flag(10001, false);
    vector<int> s1;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        s1.push_back(num);
        flag[num] = true;
    }
    for(int i=0; i<m; i++){
        int num;
        cin >> num;
        flag[num] = false;

    }
    bool isFirst = true;
    for(int i=0; i<n; i++){
        if(flag[s1[i]]){
            if(!isFirst){cout << " ";}
            cout << s1[i];
            isFirst = false;
        }
    }


    return 0;
}
