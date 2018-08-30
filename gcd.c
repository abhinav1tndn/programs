#include <stdio.h>
void main(){
int i,gcd,m,n;
scanf("%d",&m);
scanf("%d",&n);
for(i=1;i<=m && i<=n;++i)
{
  if(n%i==0 && m%i==0)
  gcd=i;
}
printf("%d",gcd);
}
