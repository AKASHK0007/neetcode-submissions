class Solution {
public:
    bool isPalindrome(string s) {
        string res="";

        for (char ch : s) {
            if (isalnum(static_cast<unsigned char>(ch))) {
                res += tolower(static_cast<unsigned char>(ch));
            }
        }
        
        string rev_res=res;
        reverse(rev_res.begin(),rev_res.end());
        return res==rev_res;
    }
};
