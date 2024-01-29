#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * * argv)
{  
    int size = 5;
    int sum = 0;
    double average;

    int arr[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    average = sum / size;

    printf("Sum: %d\n", sum);
    printf("Average: %lf\n", average);

    return EXIT_SUCCESS;
}