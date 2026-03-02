 /**
 * @brief: 9.8_1 合并果子
 * @link: https://sunnywhy.com/sfbj/9/8/371
 * @date: 2026-02-28 23:56:27
 */

//

#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    priority_queue<int> pq;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        pq.push(-temp);
    }
    int ans = 0;
    while(pq.size() != 1){
        int top1 = pq.top();
        pq.pop();
        int top2 = pq.top();
        pq.pop();
        pq.push(top1 + top2);
        ans += top1 + top2;
    }
    cout << -ans << endl;
    return 0;
}
