class Solution {
public:
int countPairs(vector<int>& d) {
    
    int n=d.size();
    long long ans=0;
    unordered_map<int,int> m;
    
    for(auto &x:d)
    {
        
        int val=x;
       
        for(int i=0;i<=21;i++)
        {
            int p=1<<i;
            if(m.find(p-val)!=m.end())
            {
             //   cout<<val<<" "<<p-val<<endl;
                ans=ans +m[p-val];
            }
        }
        
        m[x]++;
        
    }
    
     return ans;
    
}
};
