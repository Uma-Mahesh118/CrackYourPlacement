class Solution {
public:
    ListNode* deleteDuplicates(ListNode* root) {
        ListNode* head = root;
        while(head) {
            while(head->next && head->val == head->next->val) {
                head->next = head->next->next;
            }
            head = head->next;
        }
        return root;
    }
};
