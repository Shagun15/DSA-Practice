class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int min,mindex=0;
        
        for(int i=1;i<nums.size();i++)
        {   
            
            
            for(int j=i-1;j>=0;j--)
            {
                if(nums[j]>nums[j+1])
                {
                    swap(nums[j],nums[j+1]);
                }
                
            }
           
        }
        return nums;
        
    }
};
