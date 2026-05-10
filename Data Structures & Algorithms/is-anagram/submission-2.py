class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t): return False

        counter_s = [0] * 26
        counter_t = [0] * 26

        for i in range(len(s)):
            counter_s[ord(s[i]) - ord('a')] += 1;
            counter_t[ord(t[i]) - ord('a')] += 1;

        for i in range(26):
            if counter_s[i] != counter_t[i]: return False
        
        return True
         