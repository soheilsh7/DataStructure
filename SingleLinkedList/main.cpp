#include <iostream>
using namespace std;

class node{
    int data;
    node *next;
};


class LinkedList{
    LinkedList();
    ~LinkedList();
public:
    void addnode();
    void delnode();
    void display();

private:
    node *first;
    node *last;
};

int main() {

    return 0;
}
