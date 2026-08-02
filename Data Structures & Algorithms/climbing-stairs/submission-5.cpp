class Solution {
public:
    int climbstairsdp(int n,vector<int>&dp){

        if(n<=2)return n;

        if(dp[n]!=-1){return dp[n];}

        return dp[n]=climbstairsdp(n-1,dp)+climbstairsdp(n-2,dp);
    }
    int climbStairs(int n) {
        // ways(n)=ways(n-1)+ways(n-2)
        if(n<=2)return n;

        vector<int>dp(n+1,-1);

        return climbstairsdp(n,dp);
    }
};
