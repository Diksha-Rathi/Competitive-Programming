#include<stdio.h>
 
int main()
{	int n,i,array[99999],count=0,m;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{	scanf("%d",&array[i]);
			
		if(array[i] != 0)
		count = count + 1;
			
		else if(count > m)
  		{	m = count;
     			count = 0;
  		}
  		
		else
		count = 0;
				
	}
	
	if(count > m)
	printf("%d",count);
	
	else
	printf("%d",m);
	
	return 0;
}
