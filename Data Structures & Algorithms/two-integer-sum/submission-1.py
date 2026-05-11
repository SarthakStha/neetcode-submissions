class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        lookup = {}

        for idx, val in enumerate(nums):
            if target - val in lookup:
                return [lookup[target - val], idx]
            lookup[val] = idx