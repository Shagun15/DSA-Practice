class Solution {
public:
    bool canJump(vector<int>& nums) {
       int n=0;
        
            if(nums.size()==1){
                return true;
            }
            
         for(int i=0;i<nums.size();i++){
             if(n<i){
                 return false;
             }
              n=max(n,i+nums[i]);
             
         }
            
        return true;
    }
};
