class Solution(object):
    def hasCycle(self, head):
        if  head==None or head.next == None:
            return False
        sp = head
        fp = head
        while True :
            sp = sp.next
            if fp and fp.next:
                fp = fp.next.next
            else:
                return False

            if sp == fp: 
                break

        return True
        
