class Solution {
public:
    int robdp(int i,vector<int>&nums,vector<int>&dp){

        if(i<0)return 0;

        if(dp[i]!=-1)return dp[i];

        return dp[i]=max(robdp(i-1,nums,dp),nums[i]+robdp(i-2,nums,dp));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return nums[0];

        vector<int>dp(n,-1);

        return robdp(n-1,nums,dp);
    }
};
