#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

// Euclid's Algo
int gcd(int a, int b){
if(b==0) return a;
else return gcd(b,a%b);
}

int main(){
int t;
cin>>t;
while(t--){
int a,i,num;
char b[1001];
scanf("%d%s",&a,b);
if(a==0){
printf("%s\n",b);
continue;
}
int len=strlen(b);
for(i=0,num=0;i<len;i++){
num=(num*10+(b[i]-'0'))%a;
//cout<<num<<" ";
}
/*
Use the property that gcd(a,b) = gcd(b,a%b)
*/
printf("%d\n",gcd(a,num));
}
return 0;
}
