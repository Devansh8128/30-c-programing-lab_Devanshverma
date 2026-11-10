#include <stdio.h>                                                        // number is armstrong or not

int main(){
    int n,r,sum=0,temp;
    printf("enter a number: ");
    scanf("%d", &n);
    temp=n;
    while(n>0){                                                           // Name- Devansh Verma
        r=n%10;                                                           // MCA 1st year
        sum=sum+r*r*r;                                                    // section- 'A'
        n=n/10;
    }
    if (temp==sum){
        printf("armstrong number");
    }
    else {
        printf("not an armstrong number");
    }


    getch();
    return 0;
}
