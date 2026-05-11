class Solution:
    def stringify(self, arr: list[int]) -> str:
        ans = ""
        for i in arr:
            ans += str(i) + ','
        return ans
    
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = defaultdict(list)

        for word in strs:
            counter = [0] * 26
            for c in word:
                counter[ord(c) - ord('a')] += 1
            groups[self.stringify(counter)].append(word)
        
        ans = []
        for key in groups:
            ans.append(groups[key])
        
        return ans