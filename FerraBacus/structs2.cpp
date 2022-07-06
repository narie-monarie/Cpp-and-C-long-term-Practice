#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct node {
  int val;
  struct node* next;
};

node* head = new node();
node* tail = new node();

void initialize() {
  head->val = 1;
  head->next = NULL;
  tail->val = 2;
  head->next = tail;
  tail->next = NULL;
}
void printList(node* n) {
  while (n != NULL) {
    printf("%d->", n->val);
    n = n->next;
  }
}

int main() {
  initialize();
  printList(head);
}

