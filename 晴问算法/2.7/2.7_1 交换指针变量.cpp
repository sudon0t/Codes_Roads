 /**
 * @brief: 2.7_1 交换指针变量
 * @link: https://sunnywhy.com/sfbj/2/7
 * @date: 2026-02-07 20:29:34
 */

//

#include <iostream>
using namespace std;

void swap(int* a, int* b){
    int *temp = a;
    a = b;
    b = temp;
}

int main(){
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}
