 /**
 * @brief: 4.1_10 计算排名
 * @link: https://sunnywhy.com/sfbj/4/1/95
 * @date: 2026-02-15 13:32:44
 */

//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(int a, int b){
    return a<b;
}
int main(){
    int n,score;
    cin >> n;
    vector<int> s;
    for(int i=0; i<n; i++){
        cin >> score;
        s.push_back(score);
    }
    sort(s.begin(), s.end(), cmp);
    cout << s[0] << " " << 1 << endl;
    int last = 1;
    for(int i=1; i<n; i++){
        cout << s[i];
        if(s[i] != s[i-1]){
            last = i + 1;
        }
        cout << " " << last << endl;
    }
    
    return 0;
}
