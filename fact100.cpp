#include<stdio.h>
int main()
{
int n,a[200],index,temp,i;
a[0]=1;
index=0;
printf("Enter the number\n");
scanf("%d",&n);
for(;n>=2;n--)
{
temp=0;
for(i=0;i<=index;i++)
{
temp=(a[i]*n)+temp;
a[i]=temp%10;
temp=temp/10;
}
while(temp>0)
{
a[++index]=temp%10;
temp=temp/10;
}
}
for(i=index;i>=0;i--)
printf("%d",a[i]);
return 0;
}
