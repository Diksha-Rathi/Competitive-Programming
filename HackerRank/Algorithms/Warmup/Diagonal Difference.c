#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int a[n][n];
    int sum_diag_1 = 0, sum_diag_2 = 0; 
    int res;
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          scanf("%d",&a[a_i][a_j]);
          if(a_i == a_j)
              sum_diag_1 += a[a_i][a_j];
          else if((a_i + a_j) == (n-1))
              sum_diag_2 += a[a_i][a_j];
       }
    }
    if(n%2!=0)
        sum_diag_2 += a[n/2][n/2];
    res = abs(sum_diag_1 - sum_diag_2);
    printf("%d", res);
    return 0;
}

