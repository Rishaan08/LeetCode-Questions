#41. First Missing Positive

class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        nums = set(nums)
        k =1 
        while k in nums:
            k +=1
        return k
