 /**
 * @brief: 简单_KY198 查找
 * @link: https://www.nowcoder.com/practice/d93db01c2ee44e8a9237d63842aca8aa
 * @date: 2026-02-22 23:07:40
 */

//

#include <iostream>
#include <set>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    set<int> s;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        s.insert(temp);
    }

    cin >> m;
    for(int i=0; i<m; i++){
        int temp;
        cin >> temp;
        bool noflag = true;
        for(auto it = s.begin(); it != s.end(); it++){
            if(temp == *it){
                noflag = false;
                break;
            }
        }
        if(noflag){cout << "NO" << endl;}
        else{cout << "YES" << endl;}
    }
    return 0;
}
