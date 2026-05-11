class Solution {
public:
    string stringify(int arr []){
        string ans = "";
        for (int i {0}; i < 26; i++)
            ans.push_back(arr[i]);
        return ans;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for(string& word: strs){
            int counter [26] {0};
            for (const char& c : word){
                counter[c - 'a']++;
            }
            groups[stringify(counter)].push_back(word);
        }

        vector<vector<string>> ans;
        for(auto& pair : groups){
            ans.push_back(pair.second);
        }
        
        return ans;
    }
};
