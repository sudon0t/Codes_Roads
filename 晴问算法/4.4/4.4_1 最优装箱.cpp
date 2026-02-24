 /**
 * @brief: 4.4_1 最优装箱
 * @link:   https://sunnywhy.com/sfbj/4/4/149
 * @date: 2026-02-24 17:42:05
 */

//

#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int n, weight;
    scanf("%d%d", &n, &weight);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    int ans = 0, sum = 0;
    for(int i=0; i<n; i++){
        if(sum+a[i]<=weight){
            sum +=a[i];
            ans++;
        }else{break;}
    }
    printf("%d %d", ans, sum);

    return 0;
}