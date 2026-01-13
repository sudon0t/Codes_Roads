 /**
 * @brief: 2.2_12 数学函数系列I
 * @link: https://sunnywhy.com/sfbj/2/2/15
 * @date: 2026-01-13 23:04:11
 */

//

#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    double num;
    scanf("%lf", &num);
    printf("%.2f %.0f %.0f %.0f %.2f\n", abs(num), floor(num), ceil(num), round(num), pow(num, 5));
    return 0;
}
