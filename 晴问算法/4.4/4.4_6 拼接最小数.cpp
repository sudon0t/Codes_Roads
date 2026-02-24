 /**
 * @brief: 4.4_6 拼接最小数
 * @link: https://sunnywhy.com/sfbj/4/4/154
 * @date: 2026-02-24 17:53:22
 */

//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a, string b){
    return a+b < b+a;
}

int main(){
    int n;
    cin >> n;
    vector<string> v;
    string ans = "";
    for(int i=0; i<n; i++){
        string temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it = v.begin(); it != v.end(); it++){
        ans += *it;
    }
    while(true){
        if(ans[0]=='0'){
            ans = ans.substr(1);
        }else{
            break;
        }
    }
    if(ans == ""){
        ans = "0";
    }
    cout << ans << endl;
    return 0;
}
