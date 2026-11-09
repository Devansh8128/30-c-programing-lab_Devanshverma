#include <stdio.h>

int main(){
    int a,b,lcm;
    printf("enter two positive numbers: ");
    scanf("%d %d", &a, &b);

    if(a<=0 || b<=0){
        printf("enter positive number");
    }
    else {
        lcm=(a>b)?a:b;
        while(lcm % a!=0 || lcm % b!=0)
        lcm++;
        printf("LCM=%d", lcm);
    }
    getch();
    return 0;
}