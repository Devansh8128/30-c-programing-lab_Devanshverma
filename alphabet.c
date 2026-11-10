#include <stdio.h>                                                          // alphabet or not

int main() {
    char ch;

    printf("enter a character : ");                                        // Name- Devansh Verma
    scanf("%c", &ch);                                                      // MCA 1st year
    if(('A'<=ch && 'Z'>=ch) || ('a'<=ch && 'z'>=ch)){                      // section- 'A'
        printf("%c is an alphabet");
    }
    
    else{
        printf("%c is not an alphabet");
    }
    getch();
    return 0;
}
