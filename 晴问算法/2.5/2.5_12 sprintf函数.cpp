 /**
 * @brief: 2.5_12 sprintf函数
 * @link: https://sunnywhy.com/sfbj/2/5/37
 * @date: 2026-02-05 23:08:18
 */

//

#include <cstdio>
using namespace std;

int main(){
    int YYYY, MM, DD, HH, MI, SS;
    char str[50];
    scanf("%d %d %d %d %d %d", &YYYY, &MM, &DD, &HH, &MI, &SS);
    sprintf(str, "%04d-%02d-%02d %02d:%02d:%02d", YYYY, MM, DD, HH, MI, SS);
    printf("%s", str);
    return 0;
}
