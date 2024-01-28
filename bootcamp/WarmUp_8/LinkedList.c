#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
} head;

void push(int newData){
    struct Node newNode = {
        newData,
        head
    };
    head = newNode;
}

void deleteNode(int key) {
    struct Node temp = head;
    struct Node prev = NULL;

    if (temp != NULL && temp.data == key){
        head = temp.next;
        return;
    }

    while (temp != NULL && temp.data != key) {
        prev = temp;
        temp = temp.next;
    }

    if (temp == NULL){
        return;
    }

    prev.next = temp.next;
}

void printList() {
    struct Node tnode = head;
    while (tnode != NULL) {
        printf("%d ", tnode.data);
        tnode = tnode.next;
    }
}


int main(int argc, char * * argv)
{
    push(7);
    push(1);
    push(3);
    push(2);

    printList();

    return EXIT_SUCCESS;
}