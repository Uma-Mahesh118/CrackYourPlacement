/*
struct Node
{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *compute(Node *head) {
       if(head->next) head->next= compute(head->next);
       
        if(head->next && head->next->data > head->data) {
            head->data = head->next->data;
            head->next = head->next->next;
        }
        return head;
    }
};
