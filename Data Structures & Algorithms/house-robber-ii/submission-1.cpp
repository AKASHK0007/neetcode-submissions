class Solution {
public:
    int roblinear(int i,int j,vector<int>&nums){

        int prev2=0;
        int prev1=0;
        
        for(int n=i;n<=j;n++){
            int curr=max(prev1,nums[n]+prev2);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;

    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];

        int c1=roblinear(0,n-2,nums);
        int c2=roblinear(1,n-1,nums);

        return max(c1,c2);
    }
};
