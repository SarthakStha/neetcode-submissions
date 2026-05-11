class Solution:

    
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = defaultdict(list)

        for word in strs:
            counter = [0] * 26
            for c in word:
                counter[ord(c) - ord('a')] += 1
            groups[tuple(counter)].append(word)
        
        ans = []
        for val in groups.values():
            ans.append(val)
        
        return ans