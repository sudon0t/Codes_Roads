 /**
 * @brief: 入门_KY124 火星A+B
 * @link: https://www.nowcoder.com/practice/46bb070835e548678c78477f1fb0b92e
 * @date: 2026-02-18 15:35:12
 */

//

#include <cstdio>
#include <vector>
using namespace std;

int main() {
    long long n1 = 0, n2 = 0;
    // vector<int> nums = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
    //                     43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    vector<int> n1n;
    vector<int> n2n;
    vector<long long> sums = {1, 2, 6, 30, 210, 2310, 30030, 510510, 9699690, 223092870,
                              6469693230, 200560490130, 7420738134810, 304250263527210,
                              13082761331670030, 614889782588491410
                             };
    vector<int> ans;
    while (true) {
        int temp;
        scanf("%d", &temp);
        n1n.push_back(temp);
        char ch = getchar();
        if (ch == ' ') {
            break;
        }
    }
    while (true) {
        int temp;
        scanf("%d", &temp);
        n2n.push_back(temp);
        char ch = getchar();
        if (ch == EOF) {
            break;
        }
    }
    n2n.pop_back();
    int len1 = n1n.size();
    int len2 = n2n.size();
    for (int i = 0; i < len1; i++) {
        n1 += n1n[i] * sums[len1 - i - 1] ;
    }
    for (int i = 0; i < len2; i++) {
        n2 += sums[len2 - i - 1] * n2n[i];
    }
    long long n = n1 + n2;
    for (int i = 0; i < 15; i++) {
        ans.push_back(n / sums[14 - i]);
        n %= sums[14 - i];
    }
    int len = ans.size();
    bool isFirst = true;
    for(int i=0; i<=14; i++){
        if(isFirst && ans[i]==0){continue;}
        if(!isFirst){
            printf(",");
        }
        printf("%d", ans[i]);
        isFirst = false;
    }
    return 0;
}
