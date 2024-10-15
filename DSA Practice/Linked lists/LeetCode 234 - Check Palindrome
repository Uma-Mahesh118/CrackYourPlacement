class Solution {
public:
    ListNode* reversellist(ListNode * head) {
        ListNode *curr = head, *prev = NULL, *next = NULL;
        while(curr){
            next = curr ->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL) return true;
        ListNode *sp=head, *fp=head;
        bool odd;

        while(fp) {
            sp = sp->next;
            if(fp->next==NULL) break;
            fp = fp->next->next;
        } 

       sp = reversellist(sp);

       fp = sp;
       sp = head; 
       while(fp){
            if(sp->val == fp->val) {
                sp = sp->next;
                fp = fp->next;
            }
            else return false;
       }
        return true;
    }
};
