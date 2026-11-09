#include <stdio.h>

int main(){
    int n,i,fact=1;
    printf("enter number: ");
    scanf("%d", &n);

    for(i=n; i>=1; i--){
        fact*=i;
    }
    printf("factorial of %d is %d",n,fact);

    getch();
    return 0;
}