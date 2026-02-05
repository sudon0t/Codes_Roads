 /**
 * @brief: 2.5_11 sscanf函数
 * @link: https://sunnywhy.com/sfbj/2/5/36
 * @date: 2026-02-05 22:35:45
 */

//

#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    char str[51];
    cin.getline(str, 51);
    int a, b, c;
    if(sscanf(str, "%d is greater than %d", &a, &b) == 2){
        if(a>b){printf("Yes\n");}
        else{printf("No\n");}
    }else if(sscanf(str, "%d is equal to %d plus %d", &a, &b, &c) == 3){
        if(a==b+c){printf("Yes\n");}
        else{printf("No\n");}
    }else{
        {printf("???\n");}
    }
    
    return 0;
}
