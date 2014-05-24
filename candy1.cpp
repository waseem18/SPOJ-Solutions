#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t!=-1)
    {
        int ans=0,temp,sum=0,arr[t],i;
        for(i=0;i<t;i++)
        {
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }

        temp=sum/t;
        if(temp*t==sum)
        {
            for(i=0;i<t;i++)
             {
                 if(temp>arr[i])
                    ans+=temp-arr[i];
            }
            printf("%d\n",ans);
        }
        else
            printf("-1\n");
        scanf("%d",&t);
    }
    return 0;