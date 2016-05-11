#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* time = (char *)malloc(10240 * sizeof(char));
    scanf("%s",time);
    
    int i,val;
    
    val = (((time[0]-'0')*10) + (time[1]-'0'));
    
    if(val==12 && time[8] == 'A')
        printf("00");
    else if(val<12 && time[8] == 'P')
        printf("%d",val += 12);
    else
        printf("%02d",val); 
        
    for(i=2;i<=7;i++)
        printf("%c",time[i]);
        
    return 0;
}

