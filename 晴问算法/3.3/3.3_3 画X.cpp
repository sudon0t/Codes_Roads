 /**
 * @brief: 3.3_3 画X
 * @link: https://sunnywhy.com/sfbj/3/3/67
 * @date: 2026-02-08 21:16:40
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        int count = 0;
        for(int j=1; j<=n; j++){
            if(j==n+1-i || j==i){
                cout << "*";
                if(n+1-i==i){count++;}
                count++;
            }else{
                cout << " ";
            }
            if(count == 2){
                cout << endl;
                count = 0;
                break;
            }
        }
    }
    
    return 0;
}
