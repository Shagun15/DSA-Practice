void recursion(int x, int target, vector<int>&temp, vector<int>&candidates, vector<vector<int>>&N){
    
  
    if(target==0){
        // sort(temp.begin(),temp.end());
        N.push_back(temp);
        return;
    }
   
    
    for(int i=x;i<candidates.size();i++)
    {
        
       if(i>x && candidates[i]==candidates[i-1])continue;  
        
        if(candidates[i]<=target){
        
        temp.push_back(candidates[i]); 
            recursion(i+1,target-candidates[i],temp,candidates,N);
            temp.pop_back();
        }
    }
      
    }
    

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        
     
        vector<vector<int>> res;
        vector<int> temp;
        int x=0;
        
        sort(candidates.begin(),candidates.end());
        recursion(x,target,temp,candidates,res);
       // res.erase( unique( res.begin(), res.end() ), res.end() );
        
        return res;
    }
};
