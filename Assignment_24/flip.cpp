vector<int> Solution::flip(string A) {
    int c=0,i=0,t=1, Max_Len=INT_MIN;
    vector<int>ans;
    int l=1,r;
    for(int i=0;i<A.size();i++){
        if(A[i]=='0'){
            c++;
        }
    }
    if(c==0)
    return ans;
    int count=0;
   
    while(i<A.size()){
        if(A[i]=='0'){
            count++;
        }
        else
        {
            count--;
        }
        if(count>Max_Len){
            Max_Len = count;
            l = t;
            r = i+1;
        }
        if(count<0){
            count=0;
            t=i+2;
        }
        i++;
    }
        ans.push_back(l);
        ans.push_back(r);
    
    return ans;
}
