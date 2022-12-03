#include<iostream>
using namespace std;

int main()
{
    
    int count=0,n;
    cout<<"Enter n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            ++count;
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}