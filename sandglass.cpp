#include<iostream>
using namespace std;
int main()
{
int i,j,n,temp=1;
cout<<"Enter odd no. of rows";
cin>>n;
for(i=1;i<=n;i++)
{
    if(i<=n/2+1)
    {

    
    for(j=1;j<=n+1-i;j++)
    {
        
        if(j>=i)
        {
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        
    }
    cout<<endl;
}
else
{
    
    for(j=1;j<=(n-2)+(temp);j++){
        
    if(j==n-i)
        {
            cout<<" ";
            
        }
        else{
            cout<<"*";
            
        }
        
        
}
cout<<endl;
temp++;
}
}
return 0;
}
