class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        int counter_s[26] {0};
        int counter_t[26] {0};

        for(int i{0}; i < s.size(); i++){
            counter_s[s[i] - 'a']++;
            counter_t[t[i] - 'a']++;
        }

        for(int i{0}; i < 26; i++)
            if (counter_s[i] != counter_t[i]) return false;
        
        return true;
    }
};
