 /**
 * @brief: 9.8_2 树的最小带权路径长度
 * @link: https://sunnywhy.com/sfbj/9/8/372
 * @date: 2026-03-01 11:12:54
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
        int add = top1 + top2;
        ans += -add;
        pq.push(add);
    }
    cout << ans << endl;
    
    return 0;
}
