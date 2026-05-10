class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        counter = defaultdict(int)

        for i in nums:
            if counter[i] != 0: return True
            counter[i] = 1
        
        return False
        