//Link to Question- https://www.hackerrank.com/challenges/sansa-and-xor

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int T, N, i;
    long long a[100001], result;
    
    scanf("%d", &T);
    
    while(T--){
        scanf("%d", &N);
        
        result = 0;
        
        for(i=0; i<N; i++){
            scanf("%lld", &a[i]);
            
            if(i%2==0)
                result = result ^ a[i];
            else
                continue;
        }
            
        
        if(N%2 == 0)
            printf("0\n");
        else{
            printf("%lld\n", result);
        }
    }
    
    return 0;
}

