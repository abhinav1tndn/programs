#to check a number is prime and palindrom both

#include <stdio.h>


int main(int argc, char *argv[])
{
  int n,i,flag=0,rem,a,rev;
    n=atoi(argv[1]);
    //a=n;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            
        }
       
    }
    if(flag==0)
    {   a=n;
        while(n!=0)
        {
            rem=n%10;     
            rev=rev*10+rem;
            n=n/10;
        }
        if(a==rev)
        {
            printf("both");
        }
       
    }
    else
    {
        
        
        printf(" not prime");
    }
    
}
