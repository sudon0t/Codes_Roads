 /**
 * @brief: 8.2_1 数字操作
 * @link: https://sunnywhy.com/sfbj/8/2/318
 * @date: 2026-02-25 00:55:19
 */

//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int t;
    cin >> t;
    queue<int> q;
    vector<bool> flag(t+1, true);
    int count = 0;
    q.push(1);
    while(true){
        int n = q.size();
        while(n--){
            int top = q.front();
            flag[top] = false;
            if(top==t){
                cout << count << endl;
                return 0;
            }
            q.pop();
            if(flag[top+1]){
                q.push(top+1);
            }
            if(top * 2 <= t && flag[top*2]){
                q.push(top*2);
            }
        }
        count++;
    }
}
