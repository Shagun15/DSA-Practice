int Solution::maxSubArray(const vector<int> &A) {
    int sum=0;
    int m = INT_MIN;
    for(int i=0;i<A.size();i++)
    {   sum = sum+A[i];
        m= max(m,sum);
        if(sum<=0)
        sum=0;
    }
    return m;
}
