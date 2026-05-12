class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counter;
        for(const int& n : nums)
            counter[n]++;
        
        vector<vector<int>> buckets(nums.size() + 1);
        for(auto& [n, freq] : counter)
            buckets[freq].push_back(n);
        
        vector<int> ans;
        for(int i {int(nums.size())}; i >= 0; i--){
            for(int& val : buckets[i]){
                ans.push_back(val);
                if (ans.size() == k)
                    return ans;
            }
        }
    }
};
