 /**
 * @brief: 10.4_5 最短路径
 * @link: https://sunnywhy.com/sfbj/10/4/390
 * @date: 2026-03-02 10:07:35
 */

//

#include <iostream>
#include <vector>
using namespace std;

struct Road{
    int roadTo;
    int weight;
};

int main(){
    int n, m, s, t;
    cin >> n >> m >> s >> t;
    vector<vector<Road> > roads;
    for(int i=0; i<m; i++){
        int a, b, w;
        cin >> a >> b >> w;
        roads[a].push_back(Road{b, w});
    }
    
    
    
    return 0;
}
