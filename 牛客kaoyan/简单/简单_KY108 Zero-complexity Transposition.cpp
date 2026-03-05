 /**
 * @brief: 简单_KY108 Zero-complexity Transposition
 * @link: https://www.nowcoder.com/practice/c54775799f634c72b447ef31eb36e975
 * @date: 2026-02-21 16:20:02
 */

//

#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int> s;
    while(n--){
        int temp;
        cin >> temp;
        s.push(temp);
    }
    cout << s.top();
    s.pop();
    while(!s.empty()){
        cout << " " << s.top();
        s.pop();
    }
    
    return 0;
}
