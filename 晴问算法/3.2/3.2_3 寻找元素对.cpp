 /**
 * @brief: 3.2_3 寻找元素对
 * @link: https://sunnywhy.com/sfbj/3/2/64
 * @date: 2026-02-08 20:55:24
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    int count = 0;
    cin >> n;
    int a[n], b[n];
    int temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        a[i] = temp;
        b[i] = 1;
    }
    int target;
    cin >> target;
    for(int i=0; i<n; i++){
        if(b[i] == 1){
            for(int j=i+1; j<n; j++){
                // cout << a[i] << "+" << a[j] << "=" << a[i] + a[j] << endl;
                if(b[j] == 0){continue;}
                if(a[i] + a[j] == target){
                    b[i] = 0;
                    b[j] = 0;
                    count++;
                    // cout << "get one!" << endl;
                    break;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
