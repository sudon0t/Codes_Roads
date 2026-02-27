 /**
 * @brief: 9.4_2 二叉查找树的判定
 * @link: https://sunnywhy.com/sfbj/9/4/353
 * @date: 2026-02-27 15:09:40
 */

//

#include <iostream>
#include <vector>
using namespace std;

vector<int> inSeries;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        inSeries.push_back(temp);
    }
    bool check = true;
    for(int i=1; i<n; i++){
        if(inSeries[i] < inSeries[i-1]){
            check = false;
            break;
        }
    }
    if(check){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
