#include<cstdio>
#include<cmath>

int main()
{
    int i,j,n,cnt=0;
    scanf("%d",&n);

    //    counting no. of rectangles
    for(i=1;i<=sqrt(n);i++)
        for(j=i+1;i*j<=n;j++)
            cnt++;

    //    counting no. of squares
    cnt+=sqrt(n);
    printf("%d",cnt);
    return 0;
}