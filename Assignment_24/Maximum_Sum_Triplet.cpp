int Solution::solve(vector<int> &A) {
    int n= A.size();
    vector<int>rmax(n);
    rmax[n-1]=A[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rmax[i]=max(A[i],rmax[i+1]);
    }
    set<int>s;
    s.insert(A[0]);
    int ans=0;
    for(int i=1;i<n;i++)
    {
        s.insert(A[i]);
        auto it = s.find(A[i]);
        if(it!=s.begin()&&A[i]!=rmax[i])
        {
            ans = max(ans,(*--it)+A[i]+rmax[i]);
        }
    }
    return ans;
}
