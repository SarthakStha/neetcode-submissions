class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counter;
        for(const int& n: nums)
            counter[n]++;
        
        priority_queue <pair<int, int>, vector<pair<int, int>>,
                        greater<pair<int, int>>
                        > pq;
        
        for(auto& [key, val] : counter){
            pq.emplace(val, key);
            if (pq.size() > k)
                pq.pop();
        }

        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
