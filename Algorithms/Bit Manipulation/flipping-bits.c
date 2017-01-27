//Link to Question- https://www.hackerrank.com/challenges/flipping-bits

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T;
    unsigned int num;
    
    scanf("%d", &T);
    
    while(T--){
        scanf("%u", &num);

        printf("%u\n", ~num);
        
    }
    return 0;
}

