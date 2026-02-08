 /**
 * @brief: 3.1_8 2的幂
 * @link: https://sunnywhy.com/sfbj/3/1/61
 * @date: 2026-02-08 20:11:09
 */

//

#include <cstdio>

int main() {
    int n, result = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        result = (result * 2) % 1007;
    }
    printf("%d", result);
    return 0;
}