#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,n,res,V;
    scanf("%d %d", &V, &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
        if(a[i]==V)
            res=i;
    }
    printf("%d",res);
    return 0;
}

