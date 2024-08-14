#42. Trapping Rain Water

class Solution:
    def trap(self, height: List[int]) -> int:
        t = len(height)
        if t==0:
            return 0

        left = [0]*t
        right = [0]*t

        left[0]=height[0]
        for i in range(1,t):
            left[i]=max(left[i-1],height[i])

        right[t-1]=height[t-1]
        for i in range(t-2, -1, -1):
            right[i]=max(right[i+1], height[i])

        trapwater=0
        for i in range(t):
            trapwater+= min(left[i],right[i]) - height[i]

        return trapwater
