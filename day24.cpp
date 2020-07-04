#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
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



          Node* removeDuplicates(Node *head)
          {
            //Write your code here

            int m[1000]{0};

            if(head == NULL)  return head ;
            else{ 
               Node *curr = head;
                while (curr && curr->next) {
                        while (curr->next && curr->data == curr->next->data) {
                             curr->next = curr->next->next;
                 }
            curr = curr->next;
            }
                return head;
          }
}
          Node* insert(Node *head,int data)
