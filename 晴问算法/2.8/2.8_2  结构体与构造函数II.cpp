 /**
 * @brief: 2.8_2  结构体与构造函数II
 * @link: https://sunnywhy.com/sfbj/2/8/43
 * @date: 2026-02-07 21:19:47
 */

//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

struct Student {
    int id;
    char name[15];
    Student(){};
    Student(int _id, char _name[]){
        id = _id;
        strcpy(name, _name);
    };
};

int main(){
    Student student;
    int id;
    char name[15];
    scanf("%d", &id);
    getchar();
    scanf("%s", name);
    student = Student(id, name);
    printf("%d\n%s\n", student.id, student.name);
    return 0;
}
