#include <iostream>
using namespace std;

void flag(int n)
{
    int i,j;
      
for(i=1;i<=n;i++)
       {
         for(j=1;j<=(2*n+1);j++)
        {
            if(j<(2*n)-(2*i)+3 || j%2==0)
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
      cout<<"Please enter n";
      cin>>n;
      flag(n);
      flag(n);
      
     
      cout<<"NEPAL welcomes you";
}

   
    
   
