 /**
 * @brief: 简单_KY95 Fibonacci
 * @link: https://www.nowcoder.com/practice/17ad6908e36a49f4b06ea96936e8bb25
 * @date: 2026-02-21 10:41:53
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> f = {0,1,1};
    for(int i=3; i<=30; i++){
        f.push_back(f[i-2] + f[i-1]);
    }
    int n;
    cin >> n;
    cout << f[n] << endl;
    return 0;
}
