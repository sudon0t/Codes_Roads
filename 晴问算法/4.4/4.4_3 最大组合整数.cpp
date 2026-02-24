 /**
 * @brief: 4.4_3 最大组合整数
 * @link: https://sunnywhy.com/sfbj/4/4/151
 * @date: 2026-02-24 17:44:02
 */

//

#include <cstdio>

int main(){
    int a[10000], sum = 0;
    for(int i=0; i<10; i++){
        int temp;
        scanf("%d", &temp);
        for(int j=0; j<temp; j++){
            a[sum+j] = i;
        }
        sum += temp;
    }
    if(a[sum-1] == 0 ){
        printf("0");
        return 0;
    }
    for(int i=sum-1; i>=0; i--){
        printf("%d", a[i]);
    }
    return 0;
}