 /**
 * @brief: 2.2_10 日期时间输入输出I
 * @link: https://sunnywhy.com/sfbj/2/2/12
 * @date: 2026-01-13 22:45:13
 */

//

#include <iostream>
using namespace std;

int main(){
    int year, month, day, hour, minute, second;
    char ch;
    cin >> year >> ch >> month >> ch >> day >> hour >> ch >> minute >> ch >> second;
    cout << year << endl << month << endl << day << endl << hour << endl << minute << endl << second;
    return 0;
}
