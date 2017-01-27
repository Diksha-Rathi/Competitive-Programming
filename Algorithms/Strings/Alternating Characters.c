#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int i,n,del,T;
    char str[100001];
    scanf("%d", &T);
    
    while(T--){
        del = 0;
        
        scanf("%s",str);
        
        n = strlen(str);
        
        for(i=0; i<n-1; i++){
            if(str[i] == 'A'){
            	if(str[i+1]!='B')
                    del++;
            }
            else{
            	 if(str[i+1]!='A')
                    del++;	
            }
                
            //printf("%d ", del);
        }
        
        printf("%d\n", del);
    }
    
    return 0;
}

