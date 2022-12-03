#include<iostream>
using namespace std;
void lowerleft(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n*2+2;j++)
        {
            if(j<=n+1-i || j>=n+2+i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int i,j,n;
    cout<<"Enter n";
    cin>>n;
    for(i=1;i<=n/2+1;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            if(j<=i || j>n+1-i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    lowerleft(n/2);
    return 0;
}