 /**
 * @brief: 10.4_3 最短距离-多边权
 * @link: https://sunnywhy.com/sfbj/10/4/388
 * @date: 2026-03-02 08:19:08
 */

//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Road{
    int t;
    int weight;
    int roadCost;
};

bool operator < (Road lsh, Road rhs){
    if(lsh.weight != rhs.weight){
        return lsh.weight > rhs.weight;
    }else{
        return lsh.roadCost > rhs.roadCost;
    }
    
}

void dijkstra(int n, int s, vector<vector<Road> > &v, vector<int> &dist, vector<int> &cost){
    priority_queue<Road> pq;
    pq.push(Road{s, 0, 0});
    dist[s] = 0;
    cost[s] = 0;
    while(!pq.empty()){
        int startFrom = pq.top().t;
        int w = pq.top().weight;
        int c = pq.top().roadCost;
        pq.pop();
        if(dist[startFrom] > 0 && dist[startFrom] < w){
            continue;
        }
        int len = v[startFrom].size();
        for(int i=0; i<len; i++){
            int nextTarget = v[startFrom][i].t;
            int nextWeight = v[startFrom][i].weight;
            int nextCost = v[startFrom][i].roadCost;
            if(dist[nextTarget] == -1 ||
               dist[nextTarget] > dist[startFrom] + nextWeight){
                dist[nextTarget] = dist[startFrom] + nextWeight;
                cost[nextTarget] = cost[startFrom] + nextCost;
                pq.push(Road{nextTarget, dist[nextTarget], cost[nextTarget]});
            }else if(dist[nextTarget] == dist[startFrom] + nextWeight &&
                     cost[nextTarget] > cost[startFrom] + nextCost){
                        cost[nextTarget] = cost[startFrom] + nextCost;
                    }
        }
    }
}

int main(){
    int n, m, s, t;
    cin >> n >> m >> s >> t;
    vector<vector<Road> > v(n);
    vector<int> dist(n, -1);
    vector<int> cost(n, 0);
    for(int i=0; i<m; i++){
        int a, b, w, c;
        cin >> a >> b >> w >> c;
        v[a].push_back(Road{b, w, c});
        v[b].push_back(Road{a, w, c});
    }
    dijkstra(n, s, v, dist, cost);
    cout << dist[t] << " " << cost[t] << endl;
    return 0;
}
