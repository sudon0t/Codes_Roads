 /**
 * @brief: 4.3_30 游园会
 * @link: https://sunnywhy.com/sfbj/4/3/139
 * @date: 2026-02-17 22:34:00
 */

//

#include <iostream>
#include <vector>
#include <set>
using namespace std;

set<int> ans;
vector<int> scores;

void gen(int n, int l, int s){
    if(l==n+1){
        ans.insert(s);
        return;
    }
    l++;
    s += scores[l-1];
    gen(n, l, s);
    s -= scores[l-1];
    gen(n, l, s);
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        scores.push_back(temp);
    }
    gen(n, 0, 0);
    set<int>::iterator it = ans.begin();
    cout << *it;
    for(it++; it != ans.end(); it++){
        cout << " " << *it;
    }
    return 0;
}
