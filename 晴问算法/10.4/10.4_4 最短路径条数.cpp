 /**
 * @brief: 10.4_4 最短路径条数
 * @link: https://sunnywhy.com/sfbj/10/4/389
 * @date: 2026-03-02 09:06:23
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

void dijkstra(int n, int s, vector<vector<Road> > &v, vector<int> &dist, vector<int> &rc){
    priority_queue<Road> pq;
    rc[s] = 1;
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
                rc[nextTarget] = rc[startFrom];
                pq.push(Road{nextTarget, dist[nextTarget]});
            }else if(dist[nextTarget] == dist[startFrom] + nextWeight){
                rc[nextTarget] += rc[startFrom];
            }
        }
    }
}

int main(){
    int n, m, s, t;
    cin >> n >> m >> s >> t;
    vector<vector<Road> > v(n);
    vector<int> dist(n, -1);
    vector<int> roadCount(n, 0);
    for(int i=0; i<m; i++){
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back(Road{b, w});
        v[b].push_back(Road{a, w});
    }
    dijkstra(n, s, v, dist, roadCount);
    cout << dist[t] << " " << roadCount[t] << endl;
    return 0;
}
