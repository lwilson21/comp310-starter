#include <stdio.h>
#include <stdlib.h>

/* I finished this warmup last and didn't really leave myself time to seek help, so that's my fault. 
I don't fully understand structs. I also don't know if I used pointers right, or if they are 
even necessary for the task. I just looked at the c-primer and tried my best, since I'm 90% sure we
haven't talked about this material yet.*/

struct Node{
    int data;
    struct Node *next;
} *head;

void push(int newData){
    struct Node newNode = {
        newData,
        head
    };
    head = &newNode;
}

void printList(){
    struct Node tnode = *head;
    while (){
        printf("%d ", tnode.data);
        tnode = *tnode.next;
    }
    printf("\n"); 
}

int main(int argc, char * * argv){
    push(1);
    push(2);

    printList();
    return EXIT_SUCCESS;
}