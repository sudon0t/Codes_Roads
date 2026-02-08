 /**
 * @brief: 3.4_3 日期减法
 * @link: https://sunnywhy.com/sfbj/3/4/70
 * @date: 2026-02-08 21:53:24
 */

//

#include <cstdio>
using namespace std;

int main(){
    int yyyy, mm, dd, n;
    scanf("%d-%d-%d", &yyyy, &mm, &dd);
    scanf("%d", &n);
    int days0[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days1[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (n--){
        dd--;
        if(dd==0){
            mm--;
            if(mm==0){
                mm = 12;
                yyyy--;
            }
            if(yyyy%400==0||(yyyy%4==0&&yyyy%100!=0)){
                dd = days0[mm];
            }else{
                dd = days1[mm];
            }
        }
    }
    printf("%d-%02d-%02d", yyyy, mm, dd);
    
    return 0;
}