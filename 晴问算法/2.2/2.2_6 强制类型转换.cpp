 /**
 * @brief: 2.2_6 强制类型转换
 * @link: https://sunnywhy.com/sfbj/2/2/8
 * @date: 2026-01-13 22:34:49
 */

//

#include <cstdio>
using namespace std;

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int ansi = a / b;
    double ansd = double(a) / double(b);
    printf("%d\n%.2f\n", ansi, ansd);
    return 0;
}
