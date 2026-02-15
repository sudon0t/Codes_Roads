 /**
 * @brief: 3.6_6 公共前缀
 * @link: https://sunnywhy.com/sfbj/3/6/83
 * @date: 2026-02-15 11:01:55
 */

//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    int count = 0;
    cin >> n;
    vector<string> strs;
    int lenmin = 100;
    while(n--){
        string strin;
        cin >> strin;
        strs.push_back(strin);
        if(strin.length() < lenmin){lenmin = strin.length();}
    }
    for(int i=0; i<lenmin; i++){
        char ch = strs[0][i];
        bool endflag = false;
        for(int j=1; j<strs.size(); j++){
            if(strs[j][i]!= ch){
                endflag = true;
                break;
            }
        }
        if(endflag){break;}
        count++;
    }
    for(int i=0; i<count; i++){
        cout << strs[0][i];
    }
    cout << endl;
    return 0;
}
