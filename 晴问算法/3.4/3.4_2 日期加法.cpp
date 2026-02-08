 /**
 * @brief: 3.4_2 日期加法
 * @link: https://sunnywhy.com/sfbj/3/4/69
 * @date: 2026-02-08 21:36:05
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
        dd++;
        if(yyyy%400==0||(yyyy%4==0&&yyyy%100!=0)){
            if(dd>days0[mm]){
                dd = 1;
                mm++;
                if(mm==13){
                    yyyy++;
                    mm = 1;
                }
            }
        }else{
            if(dd>days1[mm]){
                dd = 1;
                mm++;
                if(mm==13){
                    yyyy++;
                    mm = 1;
                }
            }
        }
        
    }
    printf("%d-%02d-%02d", yyyy, mm, dd);
    
    return 0;
}
