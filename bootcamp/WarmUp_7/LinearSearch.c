#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * * argv)
{
    int array[] = {1, 4, 7, 9, 12};
    int target = 9;
    int size = (sizeof(array) / sizeof(array[0]));
    
    int index = linearSearch(array, target, size);

    if (index != -1){
        printf("Number found at index %d\n", index);
    } else {
        printf("Number not found in array\n");
    }

    return EXIT_SUCCESS;
}

int linearSearch(int arr[], int t, int size){
    for (int i = 0; i < size; i++){
        if (arr[i] == t){
            return i;
        }
    }
    return -1;
}