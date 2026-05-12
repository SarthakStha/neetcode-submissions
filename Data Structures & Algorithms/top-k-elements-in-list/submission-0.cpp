class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counter;
        for(const int& n : nums)
            counter[n] ++;
        
        priority_queue<pair<int, int>, 
                        vector<pair<int, int>>
                        > pq;
        
        for(const pair<int, int>& keyVals : counter)
            pq.emplace(keyVals.second, keyVals.first);
        
        vector<int> ans;
        for(int i{0}; i < k; i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};
