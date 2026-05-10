class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> mySet (nums.begin(), nums.end());
        
        return mySet.size() < nums.size();
    }
};