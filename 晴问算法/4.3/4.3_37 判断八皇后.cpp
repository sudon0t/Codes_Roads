 /**
 * @brief: 4.3_37 判断八皇后
 * @link: https://sunnywhy.com/sfbj/4/3/146
 * @date: 2026-02-24 11:31:06
 */

//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<short> nums[9];
    vector<short> r;
    r.push_back(0);
    for(int i=1; i<=8; i++){
        nums[i].push_back(0);
        for(int j=1; j<=8; j++){
            short temp;
            cin >> temp;
            nums[i].push_back(temp);
            if(temp == 1){r.push_back(j);}
        }
    }
    //纵向
    for(int i=1; i<=8; i++){
        int count = 0;
        for(int j=1; j<=8; j++){
            count += nums[j][i];
        }
        if(count!=1){
            cout << "NO" << endl;
            return 0;
        }
    }
    //横向
    for(int i=1; i<=8; i++){
        int count = 0;
        for(int j=1; j<=8; j++){
            count += nums[i][j];
        }
        if(count!=1){
            cout << "NO" << endl;
            return 0;
        }
    }
    //斜向1
    for(int i=1; i<=8; i++){
        int count = 0;
        for(int j=1; j<=7; j++){
            int x = i+j;
            if(x>8){break;}
            int y = r[i]+j;
            if(y>8){break;}
            count += nums[x][y];
        }
        if(count!=0){
            cout << "NO3" << endl;
            return 0;
        }
    }
    //斜向2
    for(int i=1; i<=8; i++){
        int count = 0;
        for(int j=1; j<=7; j++){
            int x = i-j;
            if(x<1){break;}
            int y = r[i]+j;
            if(y>8){break;}
            count += nums[x][y];
        }
        if(count!=0){
            cout << "NO4" << endl;
            return 0;
        }
    }
    //斜向3
    for(int i=1; i<=8; i++){
        int count = 0;
        for(int j=1; j<=7; j++){
            int x = i-j;
            if(x<1){break;}
            int y = r[i]-j;
            if(y<1){break;}
            count += nums[x][y];
        }
        if(count!=0){
            cout << "NO" << endl;
            return 0;
        }
    }
    //斜向4
    for(int i=1; i<=8; i++){
        int count = 0;
        for(int j=1; j<=7; j++){
            int x = i+j;
            if(x>8){break;}
            int y = r[i]-j;
            if(y<1){break;}
            count += nums[x][y];
        }
        if(count!=0){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
