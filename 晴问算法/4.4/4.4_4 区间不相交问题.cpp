 /**
 * @brief: 4.4_4 区间不相交问题
 * @link: https://sunnywhy.com/sfbj/4/4/152
 * @date: 2026-02-24 17:49:20
 */

//

#include <cstdio>
#include <algorithm>
using namespace std;

struct Zone{
    int left;
    int right;
}zones[10000];

bool cmp(Zone a, Zone b){
    if(a.right!=b.right){
        return a.right < b.right;
    }else{
        return a.left < b.left;
    }
}

int main(){
    int ans = 0;
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &zones[i].left, &zones[i].right);
    }
    sort(zones, zones + n, cmp);
    ans = 1;
    int chosenR = zones[0].right;
    for(int i=1; i<n; i++){
        if(zones[i].left>=chosenR){
            ans++;
            chosenR = zones[i].right;
        }
    }
    printf("%d", ans);
    return 0;
}