 /**
 * @brief: 4.3_38 八皇后问题
 * @link: https://sunnywhy.com/sfbj/4/3/147
 * @date: 2026-02-24 16:08:55
 */

//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> ans;

void check(vector<vector<bool> > &f, short x0, short y0){
    //斜向1
    for(short i=1; i<=8; i++){
        short x = x0 + i;
        if(x>8){break;}
        short y = y0 + i;
        if(y>8){break;}
        f[x][y] = false;
    }
    //斜向2
    for(short i=1; i<=8; i++){
        short x = x0 + i;
        if(x>8){break;}
        short y = y0 - i;
        if(y<0){break;}
        f[x][y] = false;
    }
    //纵向
    for(short i=1; i<=8; i++){
        short x = x0 + i;
        if(x>8){break;}
        f[x][y0] = false;
    }
}

void dfs(int l, string str, vector<vector<bool> > f, short x, short y){
    if(l==8){
        ans.push_back(str);
        // cout << str << endl;
        return;
    }else{//l:0~7
        if(x!=0){check(f, x, y);}
        for(int i=1; i<=8; i++){
            if(f[l+1][i]){
                str += to_string(i);
                dfs(l+1, str, f, l+1, i);
                str.pop_back();
            }

        }
    }
}

int main(){
    vector<vector<bool> > f(9, vector<bool>(9, true));
    dfs(0, "", f, 0, 0);
    cout << ans.size() << endl;    
    return 0;
}
