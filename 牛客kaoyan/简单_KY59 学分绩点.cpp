 /**
 * @brief: 简单_KY59 学分绩点
 * @link: https://www.nowcoder.com/practice/a0c09a7e0da04e728810a8aca7226b7b
 * @date: 2026-02-19 12:55:14
 */

//

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> xuefen;
    vector<double> scores;
    double ansout = 0;
    double stotal = 0;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        xuefen.push_back(temp);
        stotal += temp;
    }
    for(int i=0; i<n; i++){
        double temp;
        cin >> temp;
        scores.push_back(temp);
    }
    for(int i=0; i<n; i++){
        double s = scores[i];
        double add;
        if(s>=90&&s<=100){
            add = 4.0 * xuefen[i];
        }else if(s>=85&&s<=89){
            add = 3.7 * xuefen[i];
        }else if(s>=82&&s<=84){
            add = 3.3 * xuefen[i];
        }else if(s>=78&&s<=81){
            add = 3.0 * xuefen[i];
        }else if(s>=75&&s<=77){
            add = 2.7 * xuefen[i];
        }else if(s>=72&&s<=74){
            add = 2.3 * xuefen[i];
        }else if(s>=68&&s<=71){
            add = 2.0 * xuefen[i];
        }else if(s>=64&&s<=67){
            add = 1.5 * xuefen[i];
        }else if(s>=60&&s<=63){
            add = 1.0 * xuefen[i];
        }else{
            add = 0;
        }
        ansout += add;
    }
    printf("%.2f\n", ansout/stotal);
    return 0;
}
