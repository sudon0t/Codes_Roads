 /**
 * @brief: 4.3_14 谢尔宾斯基地毯
 * @link: https://sunnywhy.com/sfbj/4/3/123/solution/1257013412
 * @date: 2026-02-16 19:53:57
 */

//

#include <cstdio>
#include <cstring>

const int MAXN = 3 * 3 * 3 * 3 * 3 * 3 + 2;
char carpet[MAXN][MAXN];

void generateEdge(int n, int size){
    for(int i=0; i<size; i++){
            carpet[0][i] = '+';
            carpet[size-1][i] = '+';
            carpet[i][0] = '+';
            carpet[i][size-1] = '+';
    }
}

void fillX(int x, int y, int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            carpet[x+i][y+j] = 'X';
        }
    }
}

void showCarpet(int n, int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("%c", carpet[i][j]);
        }
        printf("\n");
    }
}

void generateCarpet(int x, int y, int n, int size){
    if(n==1){return;}
    else {
        int newSize = size / 3;
        generateCarpet(x, y, n-1, newSize);
        generateCarpet(x + newSize, y, n-1, newSize);
        generateCarpet(x + 2 * newSize, y, n-1, newSize);
        
        generateCarpet(x, y + newSize, n-1, newSize);
        fillX(x+newSize, y+newSize, newSize);
        generateCarpet(x + 2 * newSize, y + newSize, n-1, newSize);

        generateCarpet(x, y + 2 * newSize, n-1, newSize);
        generateCarpet(x + newSize, y + 2 * newSize, n-1, newSize);
        generateCarpet(x + 2 * newSize, y + 2 * newSize, n-1, newSize);
    }
}

int main(){
    int n;
    memset(carpet, ' ', sizeof(carpet));
    scanf("%d", &n);
    int size = 1;
    for(int i=0; i<n-1; i++){
        size *= 3;
    }
    generateCarpet(1, 1, n, size);
    generateEdge(n, size+2);
    showCarpet(n, size+2);
    return 0;
}