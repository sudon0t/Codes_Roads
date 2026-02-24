 /**
 * @brief: 8.2_2 矩阵中的块
 * @link: https://sunnywhy.com/sfbj/8/2/319
 * @date: 2026-02-25 01:27:20
 */

//

#include <iostream>
#include <vector>
using namespace std;

vector<vector<short> > nums;
int label = 1;
int n, m;

void gen(int x, int y){
    nums[x][y] = label;
    if(x-1>=0){
        if(nums[x-1][y]==-1){
            gen(x-1, y);
        }
    }
    if(x+1<n){
        if(nums[x+1][y]==-1){
            gen(x+1, y);
        }
    }
    if(y-1>=0){
        if(nums[x][y-1]==-1){
            gen(x, y-1);
        }
    }
    if(y+1<m){
        if(nums[x][y+1]==-1){
            gen(x, y+1);
        }
    }
}

int main(){
    cin >> n >> m;
    vector<short> temp;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            short in;
            cin >> in;
            if(in==1){in=-1;}
            temp.push_back(in);
        }
        nums.push_back(temp);
        temp.clear();
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
cout << nums[i][j];
        }
cout << endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(nums[i][j]==-1){
                gen(i, j);
                label++;
            }
        }
    }
    cout << label-1 << endl;
    return 0;
}
