 /**
 * @brief: 2.5_3 二维数组输入输出
 * @link: https://sunnywhy.com/sfbj/2/5/28
 * @date: 2026-02-05 21:57:09
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int> > nums(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int temp;
            cin >> temp;
            nums[i].push_back(temp);
        }
    }
    for(int i=0; i<n; i++){
        cout << nums[i][0];
        for(int j=1; j<m; j++){
            cout << " ";
            cout << nums[i][j];
        }
        cout << endl;
    }
    return 0;
}
