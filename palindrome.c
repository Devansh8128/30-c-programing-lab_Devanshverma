#include <stdio.h>                                                          // palindrome number or not

int main(){
    int n,r,rev=0,temp;
    printf("enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0){                                                             // Name- Devansh Verma
        r=n%10;                                                             // MCA 1st year
        rev= rev*10+r;                                                      // section-'A'
        n=n/10;
    }
    if(temp==rev){
        printf("palindrome number");
    }
    else{
        printf("not a palindrome number");
    }

    getch();
    return 0;
}
