#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node* first  = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third  = (struct node*)malloc(sizeof(struct node));

    // Data assign
    first->data = 10;
    second->data = 20;
    third->data = 30;

    // Linking
    first->next = second;
    second->next = third;
    third->next = NULL;

    // Traversing, Printing & Counting
    struct node* temp = first;
    int count = 0;

    printf("Linked List elements: ");

    while (temp != NULL)
    {
        printf("%d ", temp->data);  // PRINT
        count++;                   // COUNT
        temp = temp->next;         // TRAVERSE
    }

    printf("\nTotal number of nodes = %d\n", count);

    return 0;
}
