//Link to Question- https://www.hackerrank.com/challenges/sum-vs-xor

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long n, count = 0; 
    scanf("%ld",&n);
    
    while(n > 0){
        if((n&0x1)==0){
            count++;
        }
        
    	n>>=1;       
    }
    
    printf("%ld", (long)pow(2, count));
    
    return 0;
}

