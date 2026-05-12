class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for (string word: strs){
            string encoded_word = to_string(word.size()) + "|" + word;
            ans += encoded_word;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        stringstream ss (s);
        string curr = "";

        while (getline(ss, curr, '|')){
            int i {stoi(curr)};
            curr = "";
            while(i--){
                char c;
                ss.get(c);
                curr += c;
            }
            ans.push_back(curr);
        }
        return ans;
    }
};
