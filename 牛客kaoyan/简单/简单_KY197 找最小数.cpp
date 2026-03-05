 /**
 * @brief: 简单_KY197 找最小数
 * @link: https://www.nowcoder.com/practice/ba91786c4759403992896d859e87a6cd
 * @date: 2026-02-22 23:02:05
 */

//

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first){
        return a.first < b.first;
    }else{
        return a.second < b.second;
    }
}

int main(){
    int n;
    vector<pair<int, int> > vec;
    cin >> n;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        vec.push_back(pair<int, int> (a, b));
    }
    sort(vec.begin(), vec.end(), cmp);
    cout << vec[0].first << " " << vec[0].second << endl;
    return 0;
}
