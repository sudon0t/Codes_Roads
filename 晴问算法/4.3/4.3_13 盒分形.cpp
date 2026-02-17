 /**
 * @brief: 4.3_13 盒分形
 * @link: https://sunnywhy.com/sfbj/4/3/122/solution/1950786426
 * @date: 2026-02-16 19:53:09
 */

//

#include <cstdio>
#include <cstring>

char ans[730][730];

void showAns(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%c", ans[i][j]);
        }
        printf("\n");
    }


}

void box(int x, int y, int n, int size){
    if(n==0){
        ans[x][y] = 'X'; 
        return;
    }else{
        int newSize = size/3;
        box(x, y, n-1, newSize);
        box(x + 2 * newSize, y, n-1, newSize);
        box(x, y + 2 * newSize, n-1, newSize);
        box(x + newSize, y + newSize, n-1, newSize);
        box(x + 2 * newSize, y + 2 * newSize, n-1, newSize);
    }
}


int main(){
    memset(ans, ' ', sizeof(ans));
    int n;
    scanf("%d", &n);
    int size = 1;
    for(int i = 0; i < n - 1; i++) {
        size *= 3;
    }
    box(1, 1, n, size);
    showAns(size);

    return 0;
}