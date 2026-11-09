#include <stdio.h>

int main() {
    char ch;

    printf("enter a character : ");
    scanf("%c", &ch);
    if(('A'<=ch && 'Z'>=ch) || ('a'<=ch && 'z'>=ch)){
        printf("%c is an alphabet");
    }
    
    else{
        printf("%c is not an alphabet");
    }
    getch();
    return 0;
}