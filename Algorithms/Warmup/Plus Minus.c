#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    float count_p, count_n, count_z; 
    scanf("%d",&n);
    int arr[n];
    count_p = count_n = count_z = 0;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
       if(arr[arr_i] > 0)
           count_p++;
       else if(arr[arr_i] == 0)
           count_z++;
       else
           count_n++;
    }
    printf("%0.6f\n%0.6f\n%0.6f", count_p/n, count_n/n, count_z/n);
    return 0;
}

