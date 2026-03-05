 /**
 * @brief: 简单_KY36 小白鼠排队
 * @link: https://www.nowcoder.com/practice/27fbaa6c7b2e419bbf4de8ba60cf372b
 * @date: 2026-02-18 19:34:07
 */

//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Mouse{
    int w;
    string c;
    Mouse(int _w, string _c){
        w = _w;
        c = _c;
    }
};

bool cmp(Mouse a, Mouse b){
    return a.w > b.w;
}

int main(){
    int n;
    cin >> n;
    vector<Mouse> mice;
    int i = n;
    while(i--){
        int w;
        string c;
        cin >> w >> c;
        Mouse newM = Mouse(w, c);
        mice.push_back(newM);
    }
    sort(mice.begin(), mice.end(), cmp);
    for(auto it=mice.begin(); it!=mice.end(); it++){
        cout << it->c << endl;
    }
    return 0;
}
