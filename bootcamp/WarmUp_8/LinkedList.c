#include <stdio.h>
#include <stdlib.h>

struct LinkedList{
    Node head;

    struct Node{
        int data;
        Node next;

        Node(int d) {
            data = d;
            next = NULL;
        }
    }

    void push(int newData){
        Node newNode = new Node(newData);
        newNode.next = head;
        head = newNode;
    }

    void deleteNode(int key){
        Node temp = head;
        Node prev = NULL;

        if (temp != NULL && temp.data == key){
            head = temp.next;
            return;
        }

        while (temp != NULL && temp.data != key){
            prev = temp;
            temp = temp.next;
        }

        if (temp == NULL){
            return;
        }

        prev.next = temp.next;
    }

    void printList(){

    }
}


int main(int argc, char * * argv)
{
    printf("Hello, World\n");
    return EXIT_SUCCESS;
}