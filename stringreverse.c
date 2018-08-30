#include <stdio.h>
#include<string.h>
void main(){
char a[20],b[20];
int i,j,len;
scanf("%s",a);
j=0;
len=strlen(a);
for(i=len-1;i>=0;i--)
{
  b[j++]=a[i];
}
b[j]='\0';
printf("%s",b);
}
