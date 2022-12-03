#include<iostream>
using namespace std;
void upperhalf(int n)
{
int i,j;
int rows=n;
for(i=1;i<=n;i++)
{
    for(j=1;j<=n-1+i;j++)
    {
        
        if(j<rows)
        {
            cout<<" ";
        }
        else
        {
            cout<<"*";
            
        }
    }
    cout<<endl;
    rows--;
}
}
void lowerhalf(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n)+1-i;j++)
        {
            if(i>=j)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n;
cout<<"Enter a number";
cin>>n;
upperhalf(n/2+1);
lowerhalf(n/2);
return 0;
}