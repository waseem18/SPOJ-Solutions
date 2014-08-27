#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int tc;
    scanf("%d",&tc);
    printf("\n");
    while(tc--)
    {
        char p,e;
        int flag=0;
        char *a = new char[10000];
        char *b = new char[10000];
        char *c = new char[10000];
        cin>>a;
        cin>>p;
        cin>>b;
        cin>>e;
        cin>>c;
        for(unsigned int i=0;i<strlen(a);i++)
        {
            if(a[i]=='m')
            {
                flag=1;
                break;
            }
        }

        for(unsigned int i=0;i<strlen(b);i++)
        {
            if(b[i]=='m')
            {
                flag=2;
                break;
            }
        }

        for(unsigned int i=0;i<strlen(c);i++)
        {
            if(c[i]=='m')
            {
                flag=3;
                break;
            }
        }
        if(flag==1)
        {
            int b1 = atoi(b);
            int c1 = atoi(c);
            cout<<(c1-b1);
            cout<<" + ";
            cout<<b1;
            cout<<" = ";
            cout<<c1<<endl;
            printf("\n");
        }
        if(flag==2)
        {
            int a2 = atoi(a);
            int c2 = atoi(c);
            cout<<a2;
            cout<<" + ";
            cout<<(c2-a2);
            cout<<" = ";
            cout<<c2<<endl;
            printf("\n");
        }
        if(flag==3)
        {
            int a3 = atoi(a);
            int b3 = atoi(b);
            cout<<a3;
            cout<<" + ";
            cout<<b3;
            cout<<" = ";
            cout<<(a3+b3)<<endl;
            printf("\n");
        }
    }
    return 0;
}
