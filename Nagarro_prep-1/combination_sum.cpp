
void recursion(vector<int>& A,vector<int>& nums,vector<vector<int>>& ans,int x,int j){
     int i=j;
    if(x==0){
        ans.push_back(nums);
       return;
    }
   
    
    while(i<A.size() && x-A[i]>=0){
        
        nums.push_back(A[i]);
        recursion(A,nums,ans,x-A[i],i);
        nums.pop_back();
        i++;
    }
}



class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end()); 
        
   
        
        vector<vector<int>> ans;
        vector<int> nums;
        recursion(candidates,nums,ans,target,0);
        
        return ans;
    }
};
