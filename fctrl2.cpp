#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>
#define size 200
using namespace std;
int main()
{
 int n,a[size],index,temp,i,t;
 scanf("%d",&t);
 while(t--)
 {
 a[0]=1;
 index=0;
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
 printf("\n");
 }
 return 0;
}