//Link to Question- https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/sherlock-and-xor/

#include <stdio.h>
 
int main()
{
    //printf("Hello World!\n");
    
    int T, N, i, even, odd;
    long long A;
    
    scanf("%d", &T);
    
    while(T--){
        scanf("%d", &N);
        
        even = odd = 0;
        
        for(i=0; i<N; i++){
            scanf("%lld", &A);
            
            if(A%2 == 0)
                even++;
            else
                odd++;
        }
        
        printf("%lld\n", even*odd);
        
    }
    return 0;
}