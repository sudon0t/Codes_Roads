 /**
 * @brief: 简单_KY94 Old Bill
 * @link: https://www.nowcoder.com/practice/17a30153e092493e8b4d13f321343927
 * @date: 2026-02-21 00:39:02
 */

//

#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int a, b, c;
        int out1, out2, out3;
        cin >> a >> b >> c;
        if(a==0 && b==0){
            cout << 0;
            break;
        }else{
            bool getans = false;
            for(int k=9; k>0; k--){
                for(int g=9; g>=0; g--){
                    int price = k * 10000 + a * 1000 + b * 100 + c * 10 + g;
                    if(price % n ==0){
                        out1 = k;
                        out2 = g;
                        out3 = price / n;
                        getans = true;
                        break;
                    }
                }
                if(getans){break;}
            }
            if(getans){
                cout << out1 << " " << out2 << " " << out3 << endl;
            }else{
                cout << "0";
            }
            
        }
    }
    return 0;
}
