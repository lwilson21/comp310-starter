#include <stdio.h>
#include <stdlib.h>

//Can't return matricies from funtions, fix :(

int[][] addMatrix(int row[], int col[]){
    int sizeRow = sizeof(row) / sizeof(row[0]);
    int sizeCol = sizeof(col) / sizeof(col[0]);
    
    int matrix[sizeRow][sizeCol];

    for (int i = 0; i < sizeRow; i++){
        for (int j = 0; j < sizeCol; j++){
            matrix[i][j] = row[i] + col[j];
        }
    }
    

    return matrix;
}

void multMatrix(int row[], int col[]){
    int sizeRow = sizeof(row) / sizeof(row[0]);
    int sizeCol = sizeof(col) / sizeof(col[0]);
    
    int matrix[sizeRow][sizeCol];

    for (int i = 0; i < sizeRow; i++){
        for (int j = 0; j < sizeCol; j++){
            matrix[i][j] = row[i] * col[j];
        }
    }

    return matrix;
}

void printMatrix(int matrix[][]){
    
    for (int i = 0; i < sizeX; i++){
        for (int j = 0; j < sizeY; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char * * argv)
{
    int x[] = {1, 2};
    int y[] = {3, 4};
    
    int aMat = addMatrix(x, y);
    int mMat = multMatrix(x, y);

    return EXIT_SUCCESS;
}
