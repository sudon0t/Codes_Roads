 /**
 * @brief: 10.4_5 最短路径（跳）
 * @link: https://sunnywhy.com/sfbj/10/4/390
 * @date: 2026-03-05 20:07:39
 */

//

#include<iostream>
#include<vector>
#include<queue>
using namespace std;   

struct Road{
    int roadTo;
    int value;
};

int main(){
    int n, m, s, t;
    cin >> n >> m >> s >> t;

    if(s == t){
        cout << "0 " << s;
        return 0;
    }

    vector<vector<int> > v(n, vector<int>(n, 101));
    for(int i=0; i<m; i++){
        int a, b, val;
        cin >> a >> b >> val;
        v[a][b] = val;
        v[b][a] = val;
    }
// for(int i=0; i<n; i++){
//     for(auto &it : v[i]){
//         cout << i << "to" << it.roadTo << ":";
//         cout << it.value << " ";
//     }
//     cout << endl;
// }

    vector<int> dist(n, 101);
    vector<int> pre(n, -1);
    vector<bool> isVisited(n, false);
    vector<int> distPre(n, -1);
    dist[s] = 0;
    for(int i=0; i<n; i++){
        int nextVisit = -1;
        int minVal = 101;
        for(int j=0; j<n; j++){
            if(!isVisited[j] && dist[j] < minVal){
                minVal = dist[j];
                nextVisit = j;
            }
        }
        if(nextVisit == -1){
            break;
        }
        isVisited[nextVisit] = true;
        pre[nextVisit] = distPre[nextVisit];
        for(int j=0; j<n; j++){
            if(dist[j] > v[nextVisit][j] + dist[nextVisit]){
                dist[j] = v[nextVisit][j] + dist[nextVisit];
                distPre[j] = nextVisit;
            }
        }
    }

// for(auto &d : dist){
//     cout << d << " ";
// }
    string ansStr = to_string(t);
    int ans = 0;
    int preIdx = t;
    while(preIdx != s){
        ans += v[preIdx][pre[preIdx]];
        preIdx = pre[preIdx];
        ansStr = to_string(preIdx) + "->" + ansStr;
    }
    cout << ans << " " << ansStr;


    return 0;
}