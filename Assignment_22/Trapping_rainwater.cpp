class Solution {
public:
    int trap(vector<int>& height) {
        //create an suffix max array
        int n=height.size();
        vector<int>SuffixMax(n+1);
        for(int i=n-1;i>=0;i--)
        {
            /*
               if(height[i]>max){
                    max = height[i];
               }
               SuffixMax = max;
            */
            SuffixMax[i]=max(SuffixMax[i+1],height[i]);    
        }
        
        for(int a:SuffixMax) cout<<a<<" ";
        
        
        int ans=0;//water added on ith index => max(min(max_height_in_left, max_height_in_right)- cur_height,0)
        
        int max_height_in_left=0;
        for(int i=0;i<n;i++)
        {
            ans += max(min(max_height_in_left, SuffixMax[i+1])-height[i],0);
            max_height_in_left = max(height[i],max_height_in_left);
        }
        return ans;
    }
};
