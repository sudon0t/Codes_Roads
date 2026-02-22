 /**
 * @brief: 简单_KY135 统计同成绩学生人数
 * @link: https://www.nowcoder.com/practice/987123efea5f43709f31ad79a318ca69
 * @date: 2026-02-22 11:08:51
 */

//

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int N;
    while (cin >> N && N != 0) {
        int counts[101];
        memset(counts, 0, sizeof(counts)); 
        for (int i = 0; i < N; ++i) {
            int score;
            cin >> score;
            counts[score]++;
        }
        int target;
        cin >> target;
        cout << counts[target] << endl;
    }
    return 0;
}