#include <iostream>
using namespace std;
int main()
{
    int i=1,j=1,temp,temp2=0,k;
    for(i=1;i<=5;i++)
    {
        if(i>3)
        {
            cout<<endl;
            for(i=4;i<=5;i++)
            {
                
                if(5>i)
                cout<<" ";
                cout<<"*";
                for(k=1;k<=2*temp2+1;k++)
                {
                    
                    cout<<" ";
                    if(k==2*temp2+1)
                    {
                        cout<<"*"<<endl;
                        
                    }
                    
                   
                }
                temp2++;
                if(temp2==2)
                {
                   goto L;
                }

            }
        }
        temp=i;
        while(temp>j)
        {
            cout<<" ";
            ++j;
            }

        
        cout<<"*";
            for(j=1;j<=(5)-(2*i);j++)
            {
                cout<<" ";
                if(j==(5)-(2*i))
                {
                    cout<<"*"<<endl;
                    
                }
            }

            j=1;

    }
           L:return 0;
        
    }
    
