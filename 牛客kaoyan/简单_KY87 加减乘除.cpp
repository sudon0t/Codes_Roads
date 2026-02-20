 /**
 * @brief: 简单_KY87 加减乘除
 * @link: https://www.nowcoder.com/practice/fdc56f9b00b34c70ad36c61ef89e3fc3
 * @date: 2026-02-20 10:31:31
 */

//

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int a, b;
    string ans;
    while(scanf("%d", &a)!=EOF){
        getchar();
        char c = getchar();
        if(c=='!'){
            int ans1 = 1;
            for(int i=1; i<=a; i++){
                ans1 *= i;
            }
            ans = to_string(ans1);
        }else{
            getchar();
            scanf("%d", &b);
            switch(c){
                case '+':
                    ans = to_string(a+b);
                    break;
                case '-':
                    ans = to_string(a-b);
                    break;
                case '*':
                    ans = to_string(a*b);
                    break;
                case '/':
                    if(b!=0){
                        ans = to_string(a/b);
                    }else{
                        ans = "error";
                    }
                    break;
                case '%':
                    if(b!=0){
                        ans = to_string(a%b);
                    }else{
                        ans = "error";
                    }
                    break;
                }
        }
        cout << ans << endl;
    }
    
    return 0;
}