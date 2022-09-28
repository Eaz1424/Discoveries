#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    printf("Enter A 5 digit number");
    scanf("%d",&a);
    b=a/10000;//b=1
    c=a%10000;//c=2345
    d=c/1000;//d=2
    e=c%1000;//e=345
    f=e/100;//f=3
    g=e%100;//g=45
    h=g/10;//h=4
    int i=g%10;//i=5
    printf("The reversed number is %d%d%d%d%d",i,h,f,d,b);
    return 0;
} 
int alt()
{
    int a,b,c;
    printf("Enter a 5 digit no.");
    scanf("%d",&a);
    b=a%10;//b=5
    c=(a/10)%10;//c=4
    int d=(a/100)%10;//d=3
    int e=(a/1000)%10;//e=2
    int f=(a/10000);//f=1
    int g=b*10000+c*1000+d*100+e*10+f*1;
    printf("The number is %d",g);
    return o;

}