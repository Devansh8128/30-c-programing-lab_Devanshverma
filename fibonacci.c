#include <stdio.h>                                                        // fibonacci series

int main(){
    int n,i,a=0,b=1,c;
    printf("enter number of terms:");
    scanf("%d", &n);
                                                                         // Name- Devansh Verma
    printf("fibonacci series");                                          // MCA 1st year 
    for(i=1;i<=n;i++){                                                   // section- 'A'
        printf("%d", a);
        c=a+b;
        a=b;
        b=c;
    }
    getch();
    return 0;
}
