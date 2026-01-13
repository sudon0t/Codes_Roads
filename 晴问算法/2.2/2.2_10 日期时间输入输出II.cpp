 /**
 * @brief: 2.2_10 日期时间输入输出II
 * @link: https://sunnywhy.com/sfbj/2/2/13
 * @date: 2026-01-13 23:00:13
 */

//

#include <cstdio>

int main() {
    int year, month, day, hour, minute, second;
    scanf("%d-%d-%d %d:%d:%d", &year, &month, &day, &hour, &minute, &second);
    printf("%4d\n", year);
    printf("%02d\n", month);
    printf("%02d\n", day);
    printf("%02d\n", hour);
    printf("%02d\n", minute);
    printf("%02d\n", second);
    
    return 0;
}