//Link to problem- https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/

#include <stdio.h>

int main()
{
    //printf("Hello World!\n");
    int T, N;
    
   	scanf("%d", &T);
   	
   	while(T--){
   		
   		int count = 0;
   		
   		scanf("%d", &N);
   		
   		while(N){
   			N = N & (N-1);
   			count++;
   		}
   		
   		printf("%d\n", count);
   		
   	}
    return 0;
}
