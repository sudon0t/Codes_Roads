 /**
 * @brief: 简单_KY82 Number Steps
 * @link: https://www.nowcoder.com/practice/e3d8d4dd9ec740f9b1e7fc1e8574ba21
 * @date: 2026-02-19 16:14:59
 */

//

#include <iostream>
using namespace std;

int main(){
    int x, y;
    while(cin >> x >> y){
        cin >> x >> y;
        if(x % 2 == 1){
            if(y==x){
                cout << 2*x-1;
            }else if(y==x-2){
                cout << 2*x-3;
            }else{
                cout << "No Number";
            }
        }else if(x % 2 == 0){
            if(y==x){
                cout << 2*x;
            }else if(y==x-2){
                cout << 2*x-2;
            }else{
                cout << "No Number";
            }
        }
        cout << endl;
    }

    return 0;
}
