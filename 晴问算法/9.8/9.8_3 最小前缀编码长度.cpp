 /**
 * @brief: 9.8_3 最小前缀编码长度
 * @link: https://sunnywhy.com/sfbj/9/8/373
 * @date: 2026-03-01 11:31:09
 */

//

#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;


int main(){
    string str;
    cin >> str;
    vector<int> ch(26, 0);
    for(int i=0; i<str.length(); i++){
        ch[str[i] - 'A']++;
    }
    priority_queue<int, vector<int>, greater<int> > pq;
    for(int i=0; i<26; i++){
        if(ch[i] > 0){
            pq.push(ch[i]);
        }
    }
    int ans = 0;
    while(pq.size() != 1){
        int top1 = pq.top();
        pq.pop();
        int top2 = pq.top();
        pq.pop();
        int add = top1 + top2;
        ans += add;
        pq.push(add);
    }
    cout << ans << endl;
    
    return 0;
}
