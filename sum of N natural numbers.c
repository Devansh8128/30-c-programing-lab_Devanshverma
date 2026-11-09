#include <stdio.h>                                               // sum of 'N' natural numbers.
int main() {
    int n;
    printf("enter number: ");                                   // Name- DEVANSH VERMA
    scanf("%d", &n);                                                  // MCA 1st year
                                                                      // Section 'A'
    
    int sum=0;
    
    for(int i=1; i<=n; i++) {
        sum=i+sum;
    }                                                            
    printf("%d",sum);                                                             
                                                                       
    




    return 0;
}
