class Solution(object):
    def middleNode(self, head):
        sp = head
        while head and head.next :
            sp = sp.next
            head = head.next.next  
        return sp        
