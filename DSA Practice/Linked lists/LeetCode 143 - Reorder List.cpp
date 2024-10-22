class Solution {
    public:
    void reorderList(ListNode* head) {
        ListNode *slow(head) ,*fast(head);

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *prev(NULL), *nxt;
        while(slow){
            nxt = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nxt;
        }
        slow = prev;
        ListNode *front = head, *end = slow, *nxt1(NULL), *nxt2(NULL);
        int i = 0;
        while(front && front->next){
            if(!i%2){
                nxt1 = front->next;
                front->next = end;
                front = nxt1;
                i += 1;
            }
            else{
                nxt2 = end->next;
                end->next = front;
                end = nxt2;
                i -= 1;
            }
        }   
    }
};
