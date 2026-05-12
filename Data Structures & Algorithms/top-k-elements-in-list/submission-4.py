class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        counter = defaultdict(int)
        for n in nums:
            counter[n] += 1
        
        buckets = [[] for _ in range(len(nums) + 1)]
        for [n, freq] in counter.items():
            buckets[freq].append(n)
        
        ans = []
        for i in range(len(nums), -1, -1):
            for n in buckets[i]:
                ans.append(n)
                if len(ans) == k:
                    return ans