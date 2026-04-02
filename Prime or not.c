#include <stdio.h>

int main() {
    int n,i;
    printf("enter a nummber :");
    scanf("%d",&n);
    
    for(i=2; i<n; i= i+1){
        if(n % i==0){
            printf("%d is not a prime number\n",n);
            
        }
    }

  
    printf("%d is a prime number",n);
      return 0;
}
