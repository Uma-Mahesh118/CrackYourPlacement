class Solution(object):
    def getIntersectionNode(self, headA, headB):
        l1 = headA
        l2 = headB

        while headA != headB :
            headA = headA.next if headA else l2
            headB = headB.next if headB else l1        
        return headA
