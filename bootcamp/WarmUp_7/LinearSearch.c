#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * * argv)
{
    int array[] = {1, 4, 7, 9, 12};
    int target = 9;
    
    int index = linearSearch(array, target);

    if (index != -1){
        printf("Number found at index %d\n", index);
    } else {
        printf("Number not found in array\n");
    }

    return EXIT_SUCCESS;
}

int linearSearch(int arr[], int t){
    if (arr[0] == NULL){
        printf("Error: array must have elements\n");
        return EXIT_FAILURE;
    }

    int size = (sizeof(arr) / sizeof(arr[0]));
    
    for (int i = 0; i < size; i++){
        if (arr[i] == t){
            return i;
        }
    }
    return -1;
}