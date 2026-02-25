 /**
 * @brief: 8.2_9 中国象棋-马-无障碍
 * @link: https://sunnywhy.com/sfbj/8/2/326
 * @date: 2026-02-25 21:56:06
 */

//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int n, m;
    int x0, y0;
    cin >> n >> m >> x0 >> y0;
    vector<vector<short> > ans(n+1, vector<short> (m+1, -1));
    vector<short> runx = {1, 2, 2, 1, -1, -2, -2, -1};
    vector<short> runy = {2, 1, -1, -2, -2, -1, 1, 2};
    queue<short> qx;
    queue<short> qy;
    int step = 0;
    qx.push(x0);
    qy.push(y0);
    ans[x0][y0] = step;
    while(!qx.empty()){
        int len = qx.size();
        while(len--){
            short x = qx.front();
            short y = qy.front();
            ans[x][y] = step;
            qx.pop();
            qy.pop();
            for(int i=0; i<8; i++){
                int thisx = x + runx[i];
                int thisy = y + runy[i];
                if(thisx >= 1 && thisx <= n && thisy >= 1 && thisy <= m){
                    if(ans[thisx][thisy] == -1){
                        ans[thisx][thisy] = step + 1;
                        qx.push(thisx);
                        qy.push(thisy);
                    }
                }
            }
        }
        step++;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(j>1){cout << " ";}
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}
