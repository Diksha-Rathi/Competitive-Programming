//Link to Question- https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/unit-existence/

#include <stdio.h>
 
int main()
{
    
    int T, N, i;
    long long A, temp;
    
    scanf("%d", &T);
    
    while(T--){
        scanf("%d", &N);
        
        for(i=0; i<N; i++){
            scanf("%lld", &A);
            
            if(i == 0)
                temp = A;
            else
                temp = temp ^ A;
        }
                
        if(temp==0)
            printf("-1\n");
        else
            printf("%lld\n", temp);
        
    }
    
    
    return 0;
}