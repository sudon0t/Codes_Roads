 /**
 * @brief: 3.4_4 一年中的第几天
 * @link: https://sunnywhy.com/sfbj/3/4/71
 * @date: 2026-02-08 21:57:11
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
    while (true){
        dd--;
        n++;
        if(dd==0){
            mm--;
            if(mm==0){
                mm = 12;
                yyyy--;
                break;
            }
            if(yyyy%400==0||(yyyy%4==0&&yyyy%100!=0)){
                dd = days0[mm];
            }else{
                dd = days1[mm];
            }
        }
    }
    printf("%d", n);
    
    return 0;
}