class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++)
            maxSum=max(maxSum,nums[i]);
        if(maxSum<0)
        return maxSum;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(sum+nums[i]>=0)
                sum+=nums[i];
            else
                sum=0; 
            maxSum=max(maxSum,sum);
        }
        return maxSum;
    }
};
