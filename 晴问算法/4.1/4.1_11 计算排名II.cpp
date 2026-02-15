 /**
 * @brief: 4.1_11 计算排名II
 * @link: https://sunnywhy.com/sfbj/4/1/96
 * @date: 2026-02-15 13:43:42
 */

//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}
int main(){
    int n,score;
    cin >> n;
    vector<int> s;
    vector<int> rr;
    for(int i=0; i<n; i++){
        cin >> score;
        s.push_back(score);
    }
    sort(s.begin(), s.end(), cmp);
    rr.push_back(n);
    int lastr = n;
    for(int i=n-2; i>=0; i--){
        if(s[i] != s[i+1]){
            lastr = i+1;
        }
        rr.push_back(lastr);
    }
    for(int i=0; i<n; i++){
        cout << s[i] << " " << rr[n-i-1] << endl;
    }
    return 0;
}