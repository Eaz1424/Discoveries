#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((j==1 || j==n) && i<n-n/2)
            {
                cout<<"*";
            }
            if((j!=1 && j!=n) && i<n-n/2)
            {
                cout<<" ";
            }
            if(i>=n-n/2 && (n-n/2)%2!=0)
            {
               
                    if(i%j==0 || (j==1 || j==n))
                    {
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                
                
            }
             if(i>=n-n/2 && (n-n/2)%2==0)
            {
               
                    if(i%j!=0 || (j==1 || j==n))
                    {
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                
                
            }
        
        }
        cout<<endl;
}
}