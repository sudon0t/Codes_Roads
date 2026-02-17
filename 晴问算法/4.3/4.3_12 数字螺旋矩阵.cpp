 /**
 * @brief: 4.3_12 数字螺旋矩阵
 * @link: https://sunnywhy.com/sfbj/4/3/121
 * @date: 2026-02-16 17:16:42
 */

//

#include <iostream>
#include <vector>
using namespace std;

vector<vector<short> > m(26, vector<short>(26));

short fill(int x, int y, int r, short num){
    for(int i=0; i<r; i++){//1
        m[x][y+i] =num;
        num++;
    }
    for(int i=1; i<r; i++){//2
        m[x+i][y+r-1] =num;
        num++;
    }
    for(int i=1; i<r; i++){//3
        m[x+r-1][y+r-1-i] =num;
        num++;
    }
    for(int i=1; i<r-1; i++){//4
        m[x+r-1-i][y] =num;
        num++;
    }
    return num;
}

int main(){
    int n;
    cin >> n;
    int fromx = 1;
    int fromy = 1;
    int num = 1;
    for(int i=1; i<=(n+1)/2; i++){
        num = fill(fromx, fromy, n-2*i+2, num);
        fromx++;
        fromy++;
    }
    for(int i=1; i<=n; i++){
        cout << m[i][1];
        for(int j=2; j<=n; j++){
            cout << " " << m[i][j];
        }
        cout << endl;
    }
    return 0;
}
