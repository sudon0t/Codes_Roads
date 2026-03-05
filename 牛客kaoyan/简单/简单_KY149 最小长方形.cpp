 /**
 * @brief: 简单_KY147 还是畅通工程
 * @link: https://www.nowcoder.com/practice/dc6a75a15d1948edafa6d63bc8fc2368
 * @date: 2026-02-22 18:08:44
 */

//

#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

int main(){
    long x, y;
    long minx = 1e18, miny = 1e18;
    long maxx = -1e18, maxy = -1e18;
    bool exit = false;
    while(cin >> x >> y){
        if(x == 0 && y ==0){
            if(exit){break;}
            cout << minx << " " << miny << " " << maxx << " " << maxy << endl;
            minx = 1e18, miny = 1e18;
            maxx = -1e18, maxy = -1e18;
            exit = true;
            continue;
        }
        exit = false;
        if(x<minx){minx = x;}
        if(y<miny){miny = y;}
        if(x>maxx){maxx = x;}
        if(y>maxy){maxy = y;}
    }
    return 0;
}
