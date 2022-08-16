class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();
        vector<int>A(n+1);
        
        for(int i=n-1;i>=0;i--)
        {
            
            A[i]=max(A[i+1],height[i]);    
        }
        
        for(int a:A)
        {
            cout<<a<<" ";
                   
        } 
        
        
        int ans=0;
        
        int M_left=0;
        for(int i=0;i<n;i++)
        {
            ans += max(min(M_left, A[i+1])-height[i],0);
            M_left = max(height[i],M_left);
        }
        return ans;
    }
};
