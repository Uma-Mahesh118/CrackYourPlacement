class Solution(object):
    def removeNthFromEnd(self, head, n):
        fp = head
        sp = head
        for _ in range(n):
            fp = fp.next

        if fp == None:
            return head.next

        while fp.next:
            sp = sp.next
            fp = fp.next
        
        sp.next = sp.next.next
        return head
