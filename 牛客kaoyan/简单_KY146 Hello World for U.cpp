 /**
 * @brief: 简单_KY146 Hello World for U
 * @link: https://www.nowcoder.com/practice/c6e414fddd7c401887c350c9cc41f01b
 * @date: 2026-02-22 17:34:59
 */

//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string str;
    while(getline(cin, str)){
        int len = str.length();
        int n = len / 3;
        int h, w;
        if(len%3==2){//n+1, n+1, n              //(n+1)*(n+2)
            h = n + 1;
            w = n + 2;
        }else if(len%3==1){ //n+1, n, n         //(n+1)*(n+1)
            h = n + 1;
            w = n + 1;
        }else{//n-1, n, n-2//n-1 hang, n+1 lie //n, n+1, n-1//n hang, n+2 lie
            h = n;
            w = n + 2;
        }
        vector<vector<char> > vec(h, vector<char> (w, ' '));

        int index = 0;
        for(int i=0; i<=h-1; i++){
            vec[i][0] = str[index];
            index++;
        }
        for(int i=1; i<=w-1; i++){
            vec[h-1][i] = str[index];
            index++;
        }
        for(int i=h-2; i>=0; i--){
            vec[i][w-1] = str[index];
            index++;
        }


        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                cout << vec[i][j];
            }
            cout << endl;
        }
    }
    
    return 0;
}
