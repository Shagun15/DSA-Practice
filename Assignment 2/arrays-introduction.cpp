#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[100], n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[n-i]<<" ";
    } 
    return 0;
}
