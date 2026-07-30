class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            // Shrink window from the left until s[right] is no longer a duplicate
            while (st.find(s[right]) != st.end()) {
                st.erase(s[left]);
                left++;
            }

            // Expand window to include s[right]
            st.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
