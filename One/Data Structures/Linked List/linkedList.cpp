#include <cstddef>
#include <iostream>
#include <string>
using namespace std;

class node {
public:
    int val;
    node* next;

};

node* head = new node();
node* tail = new node();

void initialize() {
    head->val = 1;
    head->next = NULL;
    tail->val = 2;
    tail->next = NULL;
    head->next = tail;

}

void apnd(int val) {
    node* newNode = new node();
    newNode->val = val;
    tail->next = newNode;
    newNode = tail;

}

void prepend(int val) {
    node* newNode = new node();
    newNode->val = val;
    newNode->next = head;
    head = newNode;
}

void printList(node* n) {
    while(n != NULL) {
        cout << n->val << "->";
        n = n -> next;

    }

}
void reverse() {
    node *pre = NULL, *nextNode = NULL;
    while (head != NULL) {
        nextNode = head->next;
        head->next = pre;
        pre = head;
        head = nextNode;
    }

    head = pre;
}
int main() {
    initialize();
    apnd(3);
    prepend(0);
    reverse();
    printList(head);

}

