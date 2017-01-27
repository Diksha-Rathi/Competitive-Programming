//Link to Question- https://www.hackerrank.com/challenges/maximizing-xor

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int maxXor(int l, int r) {

    int res, count = 0;
    
    res = l ^ r;
    
    while(res != 0){
        count++;
        res = res >> 1;
    }
    
    return (pow(2, count) - 1);
    
}

int main() {
    int res;
    int _l;
    scanf("%d", &_l);
    
    int _r;
    scanf("%d", &_r);
    
    res = maxXor(_l, _r);
    printf("%d", res);
    
    return 0;
}

