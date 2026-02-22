 /**
 * @brief: 简单_KY165 数组逆置
 * @link: https://www.nowcoder.com/practice/b4f598480524493aae4686947fbf31dc
 * @date: 2026-02-22 18:33:25
 */

//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;
    reverse(str.begin(), str.end());
    cout << str;
    return 0;
}