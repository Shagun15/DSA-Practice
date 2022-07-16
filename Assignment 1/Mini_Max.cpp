void miniMaxSum(vector<int> arr) {
long long max=0,min=0;
 sort(arr.begin(),arr.end());
 
 for(long long i=0;i<arr.size()-1;i++){
     min+=arr[i];

}
 sort(arr.begin(),arr.end());
for(long long j=1;j<arr.size();j++){
    max+=arr[j];
}
  
cout<<min<<" "<<max; 
 
}

