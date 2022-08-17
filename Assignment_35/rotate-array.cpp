class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       vector<int> A(nums.size());
        
        for ( int i=0 ; i<nums.size() ; i++)
        {
            A[ (i+k) % nums.size()] = nums[i] ;
        }    

    nums = A ;
     
    }
};
