 /**
 * @brief: 4.3_2 从前有座山
 * @link: https://sunnywhy.com/sfbj/4/3/111
 * @date: 2026-02-15 20:39:58
 */

//

#include <iostream>
using namespace std;

void f(int n){
    if(n==0){
        cout << "讲你妹的故事啊！快点去睡觉！！！" << endl;
        return;
    }
    cout << "从前有座山，山上有座庙" << endl;
    cout << "庙里有一个老和尚和一个小和尚" << endl;
    cout << "睡前老和尚给小和尚讲故事：" << endl;
    f(n-1);
    cout << "然后老和尚和小和尚就睡觉啦" << endl;
}

int main(){
    int n;
    cin >> n;
    f(n);
    return 0;
}
