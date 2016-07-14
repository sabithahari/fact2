#include<stdio.h>
int main()
{
int n,f=1,i;
scanf("%d",&n)
for(i=1;i<=n;i++)
{
f*=n;
}
printf("%d",f);
return 0;
}
