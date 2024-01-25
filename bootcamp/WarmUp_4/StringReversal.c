#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * * argv)
{
    char s[] = {'H', 'e', 'l', 'l', 'o'};
    int size = sizeof(s)/sizeof(s[0]);
    char r[size];

    for (int i = 0; i < size; i++){
        r[size - 1 - i] = s[i];
    }

    printf("Original string: ");
    for (int i = 0; i < size; i++){
        printf("%c", s[i]);
    }
    printf("\n");

    printf("Reversed string: ");
        for (int i = 0; i < size; i++){
        printf("%c", r[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}