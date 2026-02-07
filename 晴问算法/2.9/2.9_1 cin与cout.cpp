 /**
 * @brief: 2.9_1 cin与cout
 * @link: https://sunnywhy.com/sfbj/2/9
 * @date: 2026-02-07 21:51:57
 */

//

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(){
    int n;
    double d;
    string str;
    cin >> n >> d;
    getchar();
    getline(cin, str);
    cout << n << endl;
    printf("%.2f\n", d);
    cout << str << endl;
    return 0;
}
