#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * * argv)
{
    FILE *fWtr, *fReadr;

    fWtr = fopen("aFile.txt", "w");
    fprintf(fWtr, "some data");
    fclose(fWtr);


    fReadr = fopen("aFile.txt", "r");
    char output[50];
    fgets(output, 50, fReadr);
    printf("File contents: \n");
    printf("%s\n", output);
    fclose(fReadr);

}