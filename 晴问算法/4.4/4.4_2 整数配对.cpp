 /**
 * @brief: 4.4_2 整数配对
 * @link: https://sunnywhy.com/sfbj/4/4/150
 * @date: 2026-02-24 17:43:09
 */

//

#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n], b[m];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }    
    for(int i=0; i<m; i++){
        scanf("%d", &b[i]);
    }
    sort(a, a+n);
    sort(b, b+m);
    int count = 0;
    for(int i=0, j=0; i<n&&j<m;){
        if(a[i]<=b[j]){
            count++;
            i++;
            j++;
        }else{
            j++;
        }
    }
    printf("%d", count);

    return 0;
}