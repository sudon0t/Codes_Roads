 /**
 * @brief: 4.3_39 N皇后问题
 * @link: https://sunnywhy.com/sfbj/4/3/148
 * @date: 2026-02-24 17:04:50
 */

//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int n;
vector<string> ans;

void check(vector<vector<bool> > &f, short x0, short y0){
    //斜向1
    for(short i=1; i<=n; i++){
        short x = x0 + i;
        if(x>n){break;}
        short y = y0 + i;
        if(y>n){break;}
        f[x][y] = false;
    }
    //斜向2
    for(short i=1; i<=n; i++){
        short x = x0 + i;
        if(x>n){break;}
        short y = y0 - i;
        if(y<0){break;}
        f[x][y] = false;
    }
    //纵向
    for(short i=1; i<=n; i++){
        short x = x0 + i;
        if(x>n){break;}
        f[x][y0] = false;
    }
}

void dfs(int l, string str, vector<vector<bool> > f, short x, short y){
    if(l==n){
        ans.push_back(str);
        // cout << str << endl;
        return;
    }else{//l:0~n-1
        if(x!=0){check(f, x, y);}
        for(int i=1; i<=n; i++){
            if(f[l+1][i]){
                str += to_string(i);
                dfs(l+1, str, f, l+1, i);
                str.pop_back();
            }
        }
    }
}

int main(){
    cin >> n;
    vector<vector<bool> > f(n+1, vector<bool>(n+1, true));
    dfs(0, "", f, 0, 0);
    cout << ans.size() << endl;    
    return 0;
}
