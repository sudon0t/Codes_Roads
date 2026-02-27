 /**
 * @brief: 9.6_5 班级最高分
 * @link: 
 * @date: 2026-02-27 20:56:50
 */

//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> father(1, -1);
vector<int> scores(1, 0);

int findRoot(int s){
    if(father[s]<0){
        return s;
    }else{
        return father[s] = findRoot(father[s]);
    }
}

bool judgeSet(int a, int b){
    return (findRoot(a) == findRoot(b));
}

void unionSet(int a, int b){
    int ra = findRoot(a);
    int rb = findRoot(b);
    if(ra == rb){
        return;
    }else{
        if(scores[ra] > scores[rb]){
            father[ra] += father[rb];
            father[rb] = ra;
        }else{
            father[rb] += father[ra];
            father[ra] = rb;
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> scoresRank;
    for(int i=1; i<=n; i++){
        father.push_back(-1);
        int s;
        cin >> s;
        scores.push_back(s);
    }
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        unionSet(a, b);
    }
    int roomCount = 0;
    for(int i=1; i<=n; i++){
        if(father[i] < 0){
            scoresRank.push_back(scores[i]);
            roomCount++;
        }
    }
    sort(scoresRank.begin(), scoresRank.end(), greater<int>());
    cout << roomCount << endl;
    cout << scoresRank[0];
    for(int i=1; i<scoresRank.size(); i++){
        cout << " " << scoresRank[i];
    }
    return 0;
}