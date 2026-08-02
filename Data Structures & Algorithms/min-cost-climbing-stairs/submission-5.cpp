// class Solution {
// public:
//     int climbstairsdp(int n,vector<int>&cost,vector<int>&dp){
     
//         if(n==1||n==0)return 0;
//         if(dp[n]!=-1){return dp[n];}

//         return dp[n]=min(climbstairsdp(n-1,cost,dp)+cost[n-1],cost[n-2]+climbstairsdp(n-2,cost,dp));
//     }
//     int minCostClimbingStairs(vector<int>& cost) {
//         int n=cost.size();
//          if(n==1)return cost[0];

//         vector<int>dp(n+1,-1);

//         return climbstairsdp(n,cost,dp);
//     }
// };

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int prev2 = 0; // dp[i-2]
        int prev1 = 0; // dp[i-1]

        int n = cost.size();
        for (int i = 2; i <= n; i++) {
            int curr = min(prev1 + cost[i - 1], prev2 + cost[i - 2]);
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};
