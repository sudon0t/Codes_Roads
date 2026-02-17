 /**
 * @brief: 4.3_11 棋盘覆盖问题
 * @link: https://sunnywhy.com/sfbj/4/3/120
 * @date: 2026-02-16 10:56:01
 */

//

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

vector<pair<int, int> > ans;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

void board(int a, int x, int y, int fromx, int fromy){
    if(a==1){return;}
    else{
        int mid = a / 2;
        ans.push_back(pair<int, int>(fromx+mid-((x>=fromx+mid)?1:0), fromy+mid-((y>=fromy+mid)?1:0)));
        if(x>fromx-1+mid&&y>fromy-1+mid){
            board(mid, x, y, fromx+mid, fromy+mid);
            board(mid, fromx+mid-1, fromy+mid-1, fromx, fromy);
            board(mid, fromx+mid, fromy+mid-1, fromx+mid, fromy);
            board(mid, fromx+mid-1, fromy+mid, fromx, fromy+mid);
        }else if(x<=fromx-1+mid&&y>fromy-1+mid){
            board(mid, x, y, fromx, fromy+mid);
            board(mid, fromx+mid-1, fromy+mid-1, fromx, fromy);
            board(mid, fromx+mid, fromy+mid-1, fromx+mid, fromy);
            board(mid, fromx+mid, fromy+mid, fromx+mid, fromy+mid);
        }else if(x>fromx-1+mid&&y<=fromy-1+mid){
            board(mid, x, y, fromx+mid, fromy);
            board(mid, fromx+mid-1, fromy+mid-1, fromx, fromy);
            board(mid, fromx+mid-1, fromy+mid, fromx, fromy+mid);
            board(mid, fromx+mid, fromy+mid, fromx+mid, fromy+mid);
        }else {
            board(mid, x, y, fromx, fromy);
            board(mid, fromx+mid-1, fromy+mid, fromx, fromy+mid);
            board(mid, fromx+mid, fromy+mid-1, fromx+mid, fromy);
            board(mid, fromx+mid, fromy+mid, fromx+mid, fromy+mid);
        }
    }
}

int main(){
    int k, x, y;
    cin >> k >> x >> y;
    board(1 << k, x, y, 1, 1);
    sort(ans.begin(), ans.end(), cmp);
    for(vector<pair<int, int> >::iterator it = ans.begin(); it!=ans.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
