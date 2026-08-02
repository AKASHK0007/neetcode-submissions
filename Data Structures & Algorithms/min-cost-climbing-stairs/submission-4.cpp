class Solution {
public:
    int climbstairsdp(int n,vector<int>&cost,vector<int>&dp){
     
        if(n==1||n==0)return 0;
        if(dp[n]!=-1){return dp[n];}

        return dp[n]=min(climbstairsdp(n-1,cost,dp)+cost[n-1],cost[n-2]+climbstairsdp(n-2,cost,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
         if(n==1)return cost[0];

        vector<int>dp(n+1,-1);

        return climbstairsdp(n,cost,dp);
    }
};
