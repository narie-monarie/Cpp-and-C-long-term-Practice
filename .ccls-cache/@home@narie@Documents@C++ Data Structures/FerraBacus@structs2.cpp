#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct node {
  int val;
  struct node *next;
};

node *head = new node();
node *tail = new node();

void initialize() {
  head->val = 1;
  head->next = NULL;
  tail->val = 2;
  head->next = tail;
  tail->next = NULL;
}
void add(int val) {
  node *newNode = new node();
  newNode->val = val;
  newNode->next = head;
  head = newNode;
}
void addLast(int val) {
  node *newNode = new node();
  newNode->val = val;
  tail->next = newNode;
  newNode = tail;
}

void addAtIndex(int val, int pos) {
  node *newNode = new node();
  newNode->val = val;
}
void printList(node *n) {
  while (n != NULL) {
    printf("%d->", n->val);
    n = n->next;
  }
}

int main() {
  initialize();
  add(3);
  addLast(7);
  printList(head);
}
