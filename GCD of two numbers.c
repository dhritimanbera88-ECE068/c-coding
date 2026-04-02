#include <stdio.h>

int main() {
    int a,b, gcd;
    printf("enters two numbers :");
    scanf("%d %d", &a, &b);
    for(int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%1==0){
            gcd = 1;
            
        }
    }
        printf("GCD is %d", gcd);

      return 0;
}
