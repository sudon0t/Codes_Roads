 /**
 * @brief: 10.4_2 最短距离-多终点
 * @link: https://sunnywhy.com/sfbj/10/4/387
 * @date: 2026-03-02 08:15:50
 */

//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Road{
    int t;
    int weight;
};


bool operator < (Road lsh, Road rhs){
    return lsh.weight > rhs.weight;
}


void dijkstra(int s, vector<vector<Road> > &v, vector<int> &dist){
    priority_queue<Road> pq;
    pq.push(Road{s, 0});
    dist[s] = 0;
    while(!pq.empty()){
        int startFrom = pq.top().t;
        int w = pq.top().weight;
        pq.pop();
        if(dist[startFrom] > 0 && dist[startFrom] < w){
            continue;
        }
        int len = v[startFrom].size();
        for(int i=0; i<len; i++){
            int nextTarget = v[startFrom][i].t;
            int nextWeight = v[startFrom][i].weight;
            if(dist[nextTarget] == -1 ||
               dist[nextTarget] > dist[startFrom] + nextWeight){
                dist[nextTarget] = dist[startFrom] + nextWeight;
                pq.push(Road{nextTarget, dist[nextTarget]});
            }
        }

    }
}

int main(){
    int n, m, s;
    cin >> n >> m >> s;
    vector<vector<Road> > v(n);
    vector<int> dist(n, -1);
    for(int i=0; i<m; i++){
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back(Road{b, w});
        v[b].push_back(Road{a, w});
    }
    dijkstra(s, v, dist);
    cout << dist[0];
    for(int i=1; i<dist.size(); i++){
        cout << " " << dist[i];
    }
    return 0;
}
