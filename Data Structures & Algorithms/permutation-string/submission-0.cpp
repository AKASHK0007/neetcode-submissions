class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>c1(26,0),c2(26,0);    
     
        int n=s1.size(),m=s2.size();

           if(n>m){
            return false;
        }

        for(char ch:s1){
            c1[ch-'a']++;
        }
        
        for(int i=0;i<n;i++){
            c2[s2[i]-'a']++;
        }

        if(c1==c2){
            return true;
        }

        for(int i=n;i<m;i++){
            c2[s2[i-n]-'a']--;
            c2[s2[i]-'a']++;


            if(c1 == c2){
                return true;
            }
        }
        return false;
    }
};
