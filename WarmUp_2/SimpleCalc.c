#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * * argv)
{
	int x;
	int y;

	printf("Enter the first number: ");
	scanf("%d", &x);
	printf("Enter the second number: ");
	scanf("%d", &y);

	printf("Sum: %d\n", (x + y));
	printf("Difference: %d\n", (x - y));
	printf("Product: %d\n", (x * y));
	printf("Quotient: %d\n", (x / y));

	return EXIT_SUCCESS;
}
