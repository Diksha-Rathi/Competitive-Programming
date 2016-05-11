#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,d,flag,n,hash[125]={0};
    char str[101];
    scanf("%d", &n);
    
    flag = 0;
    d = n;
    
    while(n--){
        scanf("%s", str);
        
        for(i=0; str[i]!='\0'; i++){
            if(hash[(int)str[i]] == flag)
                hash[(int)str[i]]++;   
        }
        
        flag++;
    }
    
    flag = 0;
    for(i=97; i<=122; i++){
        if(hash[i] == d)
            flag++;
    }
        
    printf("%d", flag);
    
    return 0;
}

