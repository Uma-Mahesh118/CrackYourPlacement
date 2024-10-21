class Solution(object):
    def addTwoNumbers(self, l1, l2):
        if l1 == None:
            return l2
        if l2 == None:
            return l1
        head  = l1
        sum = 0
        while l1 and l2:            
            l1.val, sum = (l1.val + l2.val + sum) % 10, (l1.val + l2.val + sum) // 10
            
            if l1.next == None and l2.next == None and sum:
                l1.next = ListNode(sum)
                return head
            elif l1.next == None:
                if sum >0 :
                    l1.next = ListNode(sum)
                    sum = 0
                else:
                    l1.next = l2.next
                    return head
            elif l2.next == None and sum>0:
                l2.next = ListNode(sum)  
                sum = 0 
                

            l1 = l1.next
            l2 = l2.next
        return head
