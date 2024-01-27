#include <stdio.h>
#include <stdlib.h>

//Since arrays can't be returned from functions in C, I decided that the addMatrix() and multMatrix() functions would 
//return void and print the matrices as they are constructed.

void addMatrix(int row[], int col[]){
    int sizeRow = sizeof(row) / sizeof(row[0]);
    int sizeCol = sizeof(col) / sizeof(col[0]);



    printf("Added matrices: \n");

    for (int i = 0; i < sizeRow; i++){
        for (int j = 0; j < sizeCol; j++){
            printf("%d ", (row[i] + col[j]));
        }
        printf("\n");
    }
}

void multMatrix(int row[], int col[]){
    int sizeRow = sizeof(row) / sizeof(row[0]);
    int sizeCol = sizeof(col) / sizeof(col[0]);

    printf("Multiplied matrices: \n");
    for (int i = 0; i < sizeRow; i++){
        for (int j = 0; j < sizeCol; j++){
            printf("%d ", (row[i] * col[j]));
        }
        printf("\n");
    }
}



int main(int argc, char * * argv)
{
    int x[] = {1, 2};
    int y[] = {3, 4};
    
    addMatrix(x, y);
    printf("\n\n");
    multMatrix(x, y);

    return EXIT_SUCCESS;
}
