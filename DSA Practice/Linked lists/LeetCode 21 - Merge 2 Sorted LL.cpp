class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 && !list2) return NULL;
        else if(list1 == NULL) {
            return list2;
        }
        else if(list2== NULL) {
            return list1;
        }
        if(list1->val > list2->val)   swap(list1,list2);

        ListNode *head = list1;
        while(list1 && list2) {
            if(list1->next == NULL)  {
                list1->next = list2;
                return head;
            }
            if(list1->val <=list2->val && list1->next->val >= list2->val) {
                ListNode* next1 = list1->next, *next2= list2->next;
                list1->next = list2;
                list1->next->next = next1;
                list2 = next2;
            } 
            list1 = list1->next;
        }

        if(list1 == NULL)  list1 = list2;
        return head;
    }
};
