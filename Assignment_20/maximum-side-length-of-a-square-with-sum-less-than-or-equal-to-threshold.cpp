class Solution {
public:
   int maxSideLength(vector<vector<int>>& mat, int threshold) {
int R=mat.size();
int C=mat[0].size();

    for(int i=0;i<R;i++)
    {
        for(int j=1;j<C;j++)
        {
             mat[i][j]=mat[i][j-1]+mat[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            int st=1;
            int en=min(i+1,j+1);
            while(st<=en)
            {
                int mid=(st+en)/2;
                
                int sum=0;
                int j1=j-(mid-1);
                bool isit=false;
                for(int i1=i;i1>i-mid;i1--)
                {   if(j1-1>=0)
                    sum+=mat[i1][j]-mat[i1][j1-1];
                   else
                       sum+=mat[i1][j];
                   
                }
                if(sum<=threshold)
                {                        
                    ans=max(ans,mid);
                    st=mid+1;
                }
                else
                {
                    en=mid-1;
                }
            }
        }
    }
    
    return ans;
}
};
