 /**
 * @brief: 4.3_7 数塔
 * @link: https://sunnywhy.com/sfbj/4/3/116
 * @date: 2026-02-15 21:47:46
 */

//

#include <iostream>
#include <vector>
using namespace std;

int getmax(int a, int b){
    return a>b?a:b;
}

int main(){
    int n;
    cin >> n;
    vector<vector <int> > a(n+1, vector <int>(n+1, 0));
    vector<vector <int> > mm(n+1, vector <int>(n+1, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            int temp;
            cin >> temp;
            a[i][j] = temp;
        }
    }
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i; j++){
            mm[i][j] = getmax(mm[i+1][j], mm[i+1][j+1]) + a[i][j];
        }
    }
    cout << mm[0][0] << endl;
    return 0;
}
