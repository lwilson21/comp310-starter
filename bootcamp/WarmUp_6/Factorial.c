#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * * argv)
{
    int num = 8;
    if (num >= 12) {
        printf("Error: result will exceed int limit\n");
        return EXIT_FAILURE;
    }
    printf("%d! is %d\n", num, factorial(num));
    return EXIT_SUCCESS;
}

int factorial(int n){
    if (n <= 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}