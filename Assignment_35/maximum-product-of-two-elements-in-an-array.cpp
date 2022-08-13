***1st approach***

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int fMax = INT_MIN;
        int SMax = INT_MIN;
        
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            
            if(nums[i] > fMax)
            {
                SMax = fMax;
                fMax = nums[i];
            }
            
            else if(nums[i] > SMax)
            {
                SMax = nums[i];
            } 
        }
        
        return (fMax-1)*(SMax-1); 
        
    }
};


***2nd approach ***


class Solution {
public:
    int maxProduct(vector<int>& nums) {
             
        sort(nums.begin(),nums.end());
         int n=nums.size();
        return (nums[n-1]-1)*(nums[n-2]-1);
    }
};
