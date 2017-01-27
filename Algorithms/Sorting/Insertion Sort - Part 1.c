#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void print(int ar_size, int *  ar){
    int i;
    for(i=0; i<ar_size;i++) { 
        printf("%d ", ar[i]); 
    }
    printf("\n");
}

void insertionSort(int ar_size, int *  ar) {
    int i,ele,j=0;
    ele = ar[ar_size-1];
    for(i=ar_size-1; i>=0; i--){
        if(ele<ar[i]){
            ar[i+1]=ar[i];
            j = i;
            print(ar_size,ar);
        }
    }
    ar[j]=ele;
    print(ar_size,ar);
}
int main(void) {
    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        scanf("%d", &_ar[_ar_i]); 
    }

    insertionSort(_ar_size, _ar);
    return 0;
}

