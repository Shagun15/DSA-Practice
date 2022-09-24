class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      
    sort(nums.begin(), nums.end());
    int x=0;
      
    while(x<nums.size()-1)
    {
        if(nums[x]==nums[x+1])
        {
            return 1;
        }
        else{
            x++;
        }
    }
    return 0;

    }
};
