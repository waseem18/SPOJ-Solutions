//Algorithm explanation is found at emaxxru website! 

#include <cstdio>
#include<algorithm>
using namespace std;

int gcd(int a, int b)
{
    while(b)
    {
        a%=b;
        swap(a,b);
    }
    return a;
}

int main()
{
    int input;
    //cin>>input;
    scanf("%d",&input);
    while(input!=0)
    {
        int cnt=0;
        for(int i=1;i<input;i++)
        {
            if(gcd(i,input)==1)
                cnt+=1;
        }
        //cout<<cnt<<endl;
        printf("%d",cnt);
        printf("\n");
        scanf("%d",&input);
    }
    return 0;
}
