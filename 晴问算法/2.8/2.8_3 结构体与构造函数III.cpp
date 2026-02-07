 /**
 * @brief: 2.8_3 结构体与构造函数III
 * @link: https://sunnywhy.com/sfbj/2/8/44
 * @date: 2026-02-07 21:47:22
 */

//

#include <iostream>
using namespace std;

struct Node {
    int id;
    Node* left;
    Node* right;
    Node(int _id, Node* _left, Node* _right){
        id = _id;
        left = _left;
        right = _right;
    }
};

int main(){
    int id1, id2, id3;
    cin >> id1 >> id2 >> id3;
    Node node1 = Node(id1, NULL, NULL);
    Node node2 = Node(id2, NULL, NULL);
    Node node3 = Node(id3, &node1, &node2);
    cout << node3.left->id << " " << node3.right->id;
    return 0;
}
