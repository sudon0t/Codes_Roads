 /**
 * @brief: 4.1_7 考生排序
 * @link: https://sunnywhy.com/sfbj/4/1/92
 * @date: 2026-02-15 13:17:01
 */

//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Student{
    string name;
    int score;
    Student(string _name, int _score){
        name = _name;
        score = _score;
    }
};

bool cmp(Student a, Student b){
    if(a.score != b.score){
        return a.score > b.score;
    }else{
        return a.name < b.name;
    }
}

int main(){
    int n;
    cin >> n;
    vector<Student> stus;
    for(int i=0; i<n; i++){
        string name;
        int score;
        cin >> name >> score;
        Student newStu = Student(name, score);
        stus.push_back(newStu);
    }
    sort(stus.begin(), stus.end(), cmp);
    for(int i=0; i<n; i++){
        cout << stus[i].name << " " << stus[i].score << endl;
    }
    return 0;
}
