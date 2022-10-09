int Solution::solve(vector<int> &A, int B) {
    int sum=0,m=INT_MIN;
    int n=A.size();
    for(int i=0;i<B;i++)
    {
        sum +=A[i];
    }
    m = max(m,sum);
    for(int i= 1;i<=B;i++)
    {
        sum = sum- A[B-i]+A[n-i];
        m=max(m,sum);
    }
    return m;
}
