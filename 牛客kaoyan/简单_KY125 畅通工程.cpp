 /**
 * @brief: 简单_KY125 畅通工程
 * @link: https://www.nowcoder.com/practice/4878e6c6a24e443aac5211d194cf3913
 * @date: 2026-03-02 15:44:07
 */

//

#include <iostream>
#include <vector>
using namespace std;

int findRoot(int s, vector<int> &v){
    if(v[s] < 0){
        return s;
    }else{
        return v[s] = findRoot(v[s], v);
    }
}

void unionSet(int a, int b, vector<int> &v){
    int roota = findRoot(a, v);
    int rootb = findRoot(b, v);
    if(roota == rootb){
        return;
    }else{  
        if((-v[roota]) > (-v[rootb])){
            v[roota] += v[rootb];
            v[rootb] = roota;
        }else{
            v[rootb] += v[roota];
            v[roota] = rootb;
        }
        return;
    }
}

int main(){
    int n, m;
    while(cin >> n){
        if(n==0){
            break;
        }
        cin >> m;
        vector<int> v(n+1, -1);
        for(int i=0; i<m; i++){
            int a, b;
            cin >> a >> b;
            unionSet(a, b, v);
        }
        int setCount = 0;
        for(int i=1; i<=n; i++){
            if(v[i] < 0){
                setCount++;
            }
        }
        cout << setCount - 1 << endl;
    }
    return 0;
}
