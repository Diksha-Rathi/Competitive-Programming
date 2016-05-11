#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long palindrome(long long n, char str[]){
    int i,d;
    long long ans=0;
    
    for(i=0; i<=(n/2-1); i++){
        d = abs((int)str[i] - (int)str[n-i-1]);
        ans = ans + d;
    }
    
    return ans;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,t;
    long long ans;
    char str[10001];
    scanf("%d", &t);
    
    while(t--){     
        scanf("%s" ,str);
        
        ans = 0;
        n = strlen(str);
        
        ans = palindrome(n, str);
        
        printf("%lld\n",ans);   
    }
    
    return 0;
}

