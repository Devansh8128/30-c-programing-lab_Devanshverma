#include <stdio.h>                                                                // number is positive, negative or zero

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
                                                                                  // Name- Devansh verma
    if (n>0) {                                                                    // MCA 1st year
        printf("number is positive");                                             // section- 'A'
    }
    else if (n<0) {
        printf("number is negative");
    }
    else if (n==0) {
        printf("number is zero");
    }


    return 0;
}
