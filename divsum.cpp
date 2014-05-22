#include<stdio.h>
#include<math.h>
#include<string.h>
 
void compute(int k)
{
	int sum=0;int x=0;
	int i;int rt=sqrt(k);
	
	if(k==1){printf("%d\n",0); return;}      
 
	for(i=1;i<=rt;i++)
          {
		if(k % i ==0)
	       {	  
		sum+=i;
			
	  	x=k/i;
		if((x!=i)&&(x<=k/2))
		  sum+=x;	
			
	    }
 
	 }
		 			
	printf("%d\n",sum);
	
 
}
 
 
 
int main()
{
int N;int tc;
 
scanf("%d",&tc);
while(tc--){
scanf("%d",&N);
 compute(N);
 
}
 
/*for(tc=1;tc<500001;tc++){
	compute(tc);
}
*/
return 0;
}