#include <stdio.h>                                                       // factorial of a number

int main(){
    int n,i,fact=1;
    printf("enter number: ");
    scanf("%d", &n);
                                                                         // Name- Devansh Verma
    for(i=n; i>=1; i--){                                                 // MCA 1st year
        fact*=i;                                                         // section- 'A'
    }
    printf("factorial of %d is %d",n,fact);

    getch();
    return 0;
}
