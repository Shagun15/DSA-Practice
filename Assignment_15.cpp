class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0, u=n-1;
        
        int leftmost=-1, rightmost=-1;
        
       
        while(l<=u)
        {
            int m = l+(u-l)/2;
            
            if(nums[m] == target)
            {
                leftmost = m;
                u = m-1;
            }
            
            else if(nums[m]>target)
                u=m-1;
            else
                l=m+1;
        }
        
        l=0;
        u=n-1;
        
        while(l<=u)
        {
            int m = l+(u-l)/2;
            
            if(nums[m] == target)
            {
                rightmost = m;
                l = m+1;
            }
            
            else if(nums[m]>target)
                u=m-1;
            else
                l=m+1;
        }
        
        vector<int> ans;
        ans.push_back(leftmost);
        ans.push_back(rightmost);
        
        return ans;
    }
};
