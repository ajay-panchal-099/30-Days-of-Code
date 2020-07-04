#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
          //Complete this method
          if (head == NULL) head = new Node(data);
        else {
            Node *curr = head;
            while (curr->next) curr = curr->next;
            curr->next = new Node(data);
        }
        return head;
      }

      void display(Node *head)
