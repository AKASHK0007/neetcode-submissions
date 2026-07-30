class Solution {
public:
    bool isPalindrome(string s) {
        // string res="";

        // for (char ch : s) {
        //     if (isalnum(static_cast<unsigned char>(ch))) {
        //         res += tolower(static_cast<unsigned char>(ch));
        //     }
        // }

        // string rev_res=res;
        // reverse(rev_res.begin(),rev_res.end());
        // return res==rev_res;

        int left=0;
        int right=s.length()-1;

        while(left<right){
            while(left<right && !isalnum(static_cast<unsigned char>(s[left]))){
                left++;
            }
            while(left<right && !isalnum(static_cast<unsigned char>(s[right]))){
                right--;
            }
            if(tolower(static_cast<unsigned char>(s[left]))!=tolower(static_cast<unsigned char>(s[right]))){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
