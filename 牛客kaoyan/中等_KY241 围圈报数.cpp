 /**
 * @brief: 中等_KY241 围圈报数
 * @link: https://www.nowcoder.com/practice/b033062d346c4e42a7191b94164c1cd7
 * @date: 2026-02-21 10:59:46
 */

//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int m;
        cin >> m;
        queue<int> q;
        vector<int> out;
        for(int j=1; j<=m; j++){
            q.push(j);
        }
        int num = 1;
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            if(num%3!=0){
                q.push(temp);
            }else{
                out.push_back(temp);
            }
            num++;
        }
        bool isFirst = true;
        for(auto it = out.begin(); it != out.end(); it++){
            if(!isFirst){cout << " ";}
            cout << *it;
            isFirst = false;
        }
        cout << endl;
    }
    
    
    return 0;
}
