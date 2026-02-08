 /**
 * @brief: 3.4_5 日期先后
 * @link: https://sunnywhy.com/sfbj/3/4/72
 * @date: 2026-02-08 22:00:19
 */

//

#include <cstdio>
using namespace std;

int main(){
    int yyyy1, mm1, dd1, n1;
    scanf("%d-%d-%d", &yyyy1, &mm1, &dd1);
    int yyyy2, mm2, dd2, n2;
    scanf("%d-%d-%d", &yyyy2, &mm2, &dd2);
    // printf("in1:%d-%02d-%02d\n", yyyy1, mm1, dd1);
    // printf("in2:%d-%02d-%02d\n", yyyy2, mm2, dd2);
    if((yyyy1>yyyy2)||
       (yyyy1==yyyy2&&mm1>mm2)||
       (yyyy1==yyyy2&&mm1==mm2&&dd1>=dd2)
        ){
        printf("NO\n");
    }else{printf("YES\n");}
    
    return 0;
}
