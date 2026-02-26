 /**
 * @brief: 9.2_11 二叉树的最近公共祖先
 * @link: https://sunnywhy.com/sfbj/9/2/339
 * @date: 2026-02-26 20:29:47
 */

//

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
    int n, k1, k2;
    cin >> n >> k1 >> k2;
    vector<int> f(n, -1);
    vector<int> vec1;
    vector<int> vec2;
    vec1.push_back(k1);
    vec2.push_back(k2);
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        if(a!=-1){f[a] = i;}
        if(b!=-1){f[b] = i;}
    }
    int f1 = f[k1];
    while(f1!=-1){
        vec1.push_back(f1);
        f1 = f[f1];
    }
    int f2 = f[k2];
    while(f2!=-1){
        vec2.push_back(f2);
        f2 = f[f2];
    }
    int ans;
    while(vec1[vec1.size()-1] == vec2[vec2.size()-1]){
        ans = vec1[vec1.size()-1];
        vec1.pop_back();
        vec2.pop_back();
    }
    cout << ans << endl;
    return 0;
}
