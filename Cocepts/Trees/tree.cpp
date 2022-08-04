#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define loop(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
typedef long long LL;
struct node {
  int value;
  node* left;
  node* right;
};

node* createNode(int value) {
  node* newNode = new node();
  newNode->value = value;
  newNode->left = newNode->right = nullptr;
  return newnode;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  node* root = createNode(1);
  root->left = createNode(2);
  root->right = createNode(3);
  root->left->left = createNode(4);

  //        1
  //       / \
  //      2   3
  //     /     \
  //    4
}

