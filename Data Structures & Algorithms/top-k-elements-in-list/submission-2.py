class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        counter = defaultdict(int)

        for n in nums:
            counter[n] += 1
        
        min_heap = []
        for [val, freq] in counter.items():
            heapq.heappush(min_heap, (freq, val))
            if len(min_heap) > k:
                heapq.heappop(min_heap)
        
        ans = []
        while min_heap:
            ans.append(heapq.heappop(min_heap)[1])
        
        return ans