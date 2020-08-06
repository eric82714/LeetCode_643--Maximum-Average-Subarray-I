class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        s = tmp = 0
        
        for i in range(len(nums)-k):
            tmp += nums[i+k] - nums[i]
            if tmp > s: s = tmp
            
        return (sum(nums[:k])+s) / k
