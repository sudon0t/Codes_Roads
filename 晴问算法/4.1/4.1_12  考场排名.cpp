 /**
 * @brief: 4.1_12  考场排名
 * @link: https://sunnywhy.com/sfbj/4/1/97
 * @date: 2026-02-15 13:53:30
 */

//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student{
    string name;
    int score;
    int num;
    int rank;
    Student(string _name, int _score){
        name = _name;
        score = _score;
        rank = 0;
    }
};

bool cmpin(Student a, Student b){
    if(a.score != b.score){
        return a.score > b.score;
    }else{
        return a.name < b.name;
    }
}

bool cmpout(Student a, Student b){
    return a.name < b.name;
}

int main(){
    int n;
    cin >> n;
    vector<Student> stus;
    for(int i=0; i<n; i++){
        int m;
        cin >> m;
        vector<Student> thisStu;
        for(int j=0; j<m; j++){
            string name;
            int score;
            cin >> name >> score;
            thisStu.push_back(Student(name, score));
        }
        sort(thisStu.begin(), thisStu.end(), cmpin);
        thisStu[0].rank = 1;
        stus.push_back(thisStu[0]);
        int lastr = 1;
        for(int j=1; j<m; j++){
            if(thisStu[j].score != thisStu[j-1].score){
                lastr = j + 1;
            }
            thisStu[j].rank = lastr;
            stus.push_back(thisStu[j]);
        }
        thisStu.clear();
    }
    int len = stus.size();
    sort(stus.begin(), stus.end(), cmpout);
    for(int i=0; i<len; i++){
        cout << stus[i].name << " " << stus[i].score << " " << stus[i].rank << endl;
    }
    
    return 0;
}
