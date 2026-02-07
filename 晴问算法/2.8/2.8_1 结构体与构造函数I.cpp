 /**
 * @brief: 2.8_1 结构体与构造函数I
 * @link: https://sunnywhy.com/sfbj/2/8
 * @date: 2026-02-07 20:39:27
 */

//

#include <iostream>
using namespace std;

struct Point {
    int x, y;
    Point(){};
    Point(int _x, int _y){
        x = _x;
        y = _y;
    }
};

int main(){
    Point point;
    int x, y;
    cin >> x >> y;
    point = Point(x, y);
    cout << point.x << " " << point.y << endl;
    return 0;
}
