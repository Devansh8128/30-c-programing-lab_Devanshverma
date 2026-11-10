#include <stdio.h>                                                               // swap number

int main(){
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
                                                                                 // Name- Devansh Verma
    printf("before swapping: a=%d, b=%d\n", a, b);                               // MCA 1st year
    a=a+b;                                                                       // section- 'A'
    b=a-b;
    a=a-b;
    printf("after swapping: a=%d, b=%d\n", a, b);

    return 0;
}
