#include <stdio.h>                                               // ASCII value of characters 'H' & 'f'.

int main() {
    int n;
    printf("enter number: ");                                   // Name- Devansh Verma
    scanf("%d", &n);                                            

    for(int i=1; i<=n; i++){
        printf("%d\n", i*n);
    }

    printf("END");

    return 0;
}
