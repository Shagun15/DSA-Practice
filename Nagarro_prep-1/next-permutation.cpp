class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int x=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                x=i;
                break;
            }
        }
        if(x==-1){
            sort(nums.begin(),nums.end());
            return ;
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>nums[x]){
                int a=nums[i];
                nums[i]=nums[x];
                nums[x]=a;
                break;
            }
        }
        sort(nums.begin()+x+1,nums.end());
        return;
    }
};
