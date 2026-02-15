 /**
 * @brief: 4.1_8 考生排序II
 * @link: https://sunnywhy.com/sfbj/4/1/93
 * @date: 2026-02-15 13:25:36
 */

//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Student{
    string name;
    int score1;
    int score2;
    Student(string _name, int _score1, int _score2){
        name = _name;
        score1 = _score1;
        score2 = _score2;
    }
};

bool cmp1(Student a, Student b){
    if(a.score1 != b.score1){
        return a.score1 > b.score1;
    }else{
        return a.name < b.name;
    }
}

bool cmp2(Student a, Student b){
    if(a.score2 != b.score2){
        return a.score2 > b.score2;
    }else{
        return a.name < b.name;
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<Student> stus;
    for(int i=0; i<n; i++){
        string name;
        int score1, score2;
        cin >> name >> score1 >> score2;
        Student newStu = Student(name, score1, score2);
        stus.push_back(newStu);
    }
    if(k==1){
        sort(stus.begin(), stus.end(), cmp1);
    }else{
        sort(stus.begin(), stus.end(), cmp2);
    }
    for(int i=0; i<n; i++){
        cout << stus[i].name << " " << stus[i].score1 << " " << stus[i].score2 << endl;
    }
    return 0;
}
