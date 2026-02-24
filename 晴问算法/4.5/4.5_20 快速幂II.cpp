 /**
 * @brief: 4.5_20 快速幂II
 * @link: https://sunnywhy.com/sfbj/4/5/174
 * @date: 2026-02-24 21:11:25
 */

//

#include <cstdio>

typedef long long LL;

LL fastPow(LL a, LL b, LL m) {
    LL ans = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            ans = ans * a % m;
        }
        a = a * a % m;
        b /= 2;
    }
    return ans;
}

int main() {
    LL a, b, m;
    scanf("%lld%lld%lld", &a, &b, &m);
    printf("%lld", fastPow(a, b, m));
    return 0;
}