#include <stdio.h>                                                              //greatest common divisor

int main(){
    int a,b,i,gcd;
    printf("enter two numbers: ");                                             // NAME- DEVANSH VERMA
    scanf("%d", &a);                                                           //  MCA 1st year                                                      
    for(i=1; i<=a && i<=b; i++){                                               //section- 'A'
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    printf("GCD = %d", gcd);

    getch();
    return 0;
}
