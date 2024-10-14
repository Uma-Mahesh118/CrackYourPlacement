class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *root = NULL;
        while(head && head->val == val) {
            head = head->next;
        }
        root = head;

        while(head) {
            while(head->next && val == head->next->val) {
               head->next = head->next->next; 
            }
            head = head->next;
        }
            
        return root;
    }
};
