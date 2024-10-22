class Solution(object):
    def trap(self, height):
        n = len(height)
        lst = [0]*n
        lst[0] = height[0]
        for i in range(1, n):
            lst[i] = max(lst[i-1], height[i])

        lastMax = height[n-1]

        for i in range(n-1, -1, -1):
            lastMax = max(lastMax, height[i])
            lst[i] = min(lastMax, lst[i])
            lst[i] -= height[i]
            lst[i] = max(lst[i], 0)
        
        return sum(lst)
