#include <cstdio>
//#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int numbers;
    //cin>>numbers;
    scanf("%d",&numbers);
    int *a = new int[numbers];
    for(int i=0;i<numbers;i++)
    {
        //cin>>a[i];
        scanf("%d",&a[i]);
    }
    vector<int>v(a,a+numbers);
    vector<int>::iterator it;
    sort(v.begin(),v.end());
    for(it=v.begin();it!=v.end();it++)
    {
        printf("%d",*it);
        printf("\n");
    }
    return 0;
}
