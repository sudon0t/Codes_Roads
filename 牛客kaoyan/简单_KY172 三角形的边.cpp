 /**
 * @brief: 简单_KY172 三角形的边
 * @link: https://www.nowcoder.com/practice/05dbd1cd43b24dbbae567b3e816d4e97
 * @date: 2026-02-22 22:48:59
 */

//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int a, b, c;
    vector<int> num;
    while(cin >> a >> b >> c){
        if(a==0&&b==0&&c==0){break;}
        num.push_back(a);
        num.push_back(b);
        num.push_back(c);
        cout << a+b+c - 2*max(max(a,b),c) << endl;
    }
    return 0;
}
