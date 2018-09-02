#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i=0,b[10]={0};
 char a[10000];
     scanf("%s",a);
   for(i=0;i<=strlen(a);i++)
    {
       if(a[i]>='0' && a[i]<='9')
        {
            ++b[a[i]-'0'];
        }
        else
        {
            continue;
        }
       
    }
    for(i=0;i<10;i++)
        printf("%d\t",b[i]);    
    return 0;
}

