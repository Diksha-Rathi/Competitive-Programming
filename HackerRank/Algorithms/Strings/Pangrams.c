#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char str[1001];
    fgets(str, sizeof(str), stdin);
    
    int i,d,flag = 0;
    int hash[125]={0};
    
    for(i=0; str[i]!='\0'; i++){
        d = (int)str[i];
        if(d<97)
            hash[d+32]++;
        else
            hash[d]++;
    }
    
    for(i=97; i<=122; i++){
        if(hash[i]==0){
            flag=1;
            break;
        }
    }
    
    if(flag==1)
        printf("not pangram");
    else
        printf("pangram");
    
    return 0;
}

