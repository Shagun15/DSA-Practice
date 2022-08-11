void recursion(long long x,vector<int> cnt,vector<int> nums, vector<vector<int>>& A){
    if(x>=nums.size()){
        A.push_back(cnt);
        return;
    }

    recursion(x+1,cnt,nums,A);
    
        cnt.push_back(nums[x]);
        recursion(x+1,cnt,nums,A);
  
}

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        long long x=0;
        vector<int> cnt;
        vector<vector<int>> ans;
        
         recursion(x,cnt,nums,ans);
            ans.erase( unique( ans.begin(), ans.end() ), ans.end() );
        return ans;
    }
  
};
