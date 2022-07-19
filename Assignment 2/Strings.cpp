#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a>>b;
    int len=a.size();
    int num=b.size();
    
    cout<<len<<" "<<num<<endl;
    cout<<a+b<<endl;
    
    char x;
    x=a[0];
    a[0]=b[0];
    b[0]= x;
    
    cout<<a<<" "<<b;
  
    return 0;
}
