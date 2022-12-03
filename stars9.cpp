#include<iostream>
using namespace std;
void upper(int n)
{
int i,j;
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    {
        cout<<"*";
    }
    cout<<endl;

}
}
void lower(int n)
{
int i,j;
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
    
    if(i>j)
    cout<<" ";
    else
    cout<<"*";
    
}
cout<<endl;
}
}
int main()
{
    int n;
cout<<"Enter number of rows";
cin>>n;
upper(n/2);
lower(n/2);
return 0;
}