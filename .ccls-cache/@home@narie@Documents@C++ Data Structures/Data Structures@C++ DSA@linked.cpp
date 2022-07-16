#include <cstddef>
#include <iostream>
#include <string>
using namespace std;

class node {
public:
    int val;
    node* nxt;
};

node* head = new node();
node* tail = new node();
void initialize() {
    head->val = 1;
    head->nxt = NULL;
    tail->val = 2;
    tail->nxt = NULL;
    head->nxt = tail;
}

void apnd(int val) {
    node* newNode = new node();
    newNode->val = val;
    tail->nxt = newNode;
    newNode = tail;
}

void printList(node* n) {
    while(n != NULL) {
        cout << n->val << "->";
        n = n -> nxt;
    }
}

int main() {
    initialize();
    apnd(12);
    printList(head);
}

