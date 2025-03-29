#include <iostream>

// Definition of a Node in a singly linked list
struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node *head = nullptr;

void addLevel(int leftval = 0, int rightval = 0)
{
  if (head == nullptr)
  {
    Node* root = new Node;
    root->data = leftval;
  }
}

int main()
{

    return 0;
}
