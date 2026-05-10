class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> counter;

        for(const int& i : nums){
            if (counter[i]) return true;
            counter[i]++;
        }

        return false;
    }
};