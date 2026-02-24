 /**
 * @brief: 中等_KY46 二叉树
 * @link: https://www.nowcoder.com/practice/5b80ab166efa4551844657603227caeb
 * @date: 2026-02-22 23:36:03
 */

//

#include <iostream>
using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
        while(true){
            if(a>b){
                a /= 2;
            }else if(a<b){
                b /= 2;
            }else{
                cout << a << endl;
                break;
            }
        }
    }
    return 0;
}
