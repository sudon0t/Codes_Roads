 /**
 * @brief: 3.5_3 十进制转K进制
 * @link: https://sunnywhy.com/sfbj/3/5/76
 * @date: 2026-02-14 16:10:23
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<char> a;
    if(n==0){
        cout << "0";
    }else{
        while(n){
        int num = n % k;
        if(num >= 0 && num <=9){
            a.push_back(num + '0');
        }else{
            switch(num){
                case 10:
                    a.push_back('A');
                    break;
                case 11:
                    a.push_back('B');
                    break;
                case 12:
                    a.push_back('C');
                    break;
                case 13:
                    a.push_back('D');
                    break;
                case 14:
                    a.push_back('E');
                    break;
                case 15:
                    a.push_back('F');
                    break;
            }    
        }
        n /= k;
    }
    }

    for(int i=a.size()-1; i>=0; i--){
        cout << a[i];
    }
    cout << endl;
    return 0;
}
