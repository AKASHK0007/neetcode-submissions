class Solution {
public:


    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (const string& s : strs) {
            string sortedStr = s;
            sort(sortedStr.begin(), sortedStr.end());
            
            // Group original string under its sorted key
            mp[sortedStr].push_back(s);
        }

        vector<vector<string>> ans;
        for (auto& pair : mp) {
            ans.push_back(pair.second);
        }

        return ans;
    }
};
