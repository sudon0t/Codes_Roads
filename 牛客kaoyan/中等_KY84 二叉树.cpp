 /**
 * @brief: 中等_KY84 二叉树
 * @link: https://www.nowcoder.com/practice/f74c7506538b44399f2849eba2f050b5
 * @date: 2026-02-21 16:14:27
 */

//

#include <iostream>
#include <queue>
using namespace std;

int main(){
    int m, n;
    while(cin >> m >> n){
        if(m == 0 && n == 0){break;}
        int ans = 0;
        queue<int> q;
        q.push(m);
        while(!q.empty()){
            int now = q.front();
            if(now*2<=n){
                q.push(2*now);
            }
            if(now*2+1<=n){
                q.push(2*now+1);
            }
            q.pop();
            ans++;
        }
        cout << ans << endl;
    }
       
    return 0;
}
