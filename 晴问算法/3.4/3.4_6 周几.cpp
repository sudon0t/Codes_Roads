 /**
 * @brief: 3.4_6 周几
 * @link: https://sunnywhy.com/sfbj/3/4/73
 * @date: 2026-02-08 22:07:31
 */

//

#include <cstdio>
using namespace std;

int main(){
    int yyyy, mm, dd;
    scanf("%d-%d-%d", &yyyy, &mm, &dd);
    int n = 0;
    int days0[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days1[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (yyyy!=1900||mm!=1||dd!=1){
        dd--;
        n++;
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
    printf("%d", (n+1)%7);
    
    return 0;
}