#include <stdio.h>
#include<string.h>
void main(){
int max,min,i,a[10],size;
scanf("%d",&size);
for(i=0;i<size;i++)
{
  scanf("%d",&a[i]);
}
max=a[0];

min=a[0];
for(i=1; i<size; i++)
    {
      if(a[i]>max)
      max=a[i];
   
    if(a[i]<min)
      min=a[i];
    }
printf("max %d",max);
printf("min %d",min);
}
