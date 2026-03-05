 /**
 * @brief: 中等_KY258 编排字符串
 * @link: https://www.nowcoder.com/practice/42c0673f04b34f66ae236a1cb7995532
 * @date: 2026-02-21 11:27:34
 */

//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string name;
    vector<string> ss;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> name;
        ss.push_back(name);
        int len = 4;
        if(ss.size()<4){
            len = ss.size();
        }
        for(int j=0; j<len; j++){
            if(j>0){cout << " ";}
            cout << j+1 << "=" << ss[ss.size()-j-1];
        }
        cout << endl;
    }
    return 0;
}
