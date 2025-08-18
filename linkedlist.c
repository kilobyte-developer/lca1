#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void addNode(struct node **head, int item) {
    *head = malloc(sizeof(struct node));
    if(*head == NULL) {
    printf("Memory allocation failed for struct node\n");
    }
    (*head)->data = item;
    (*head)->link = NULL;
}

int delete(struct node **s) {
    if (*s == NULL) {
        printf("List is already emtpy, nothing to delete!");
        return -1;
    }
    // free the node
    free(*s);

    // reset the head pointer
    *s = NULL;
    printf("Node is now deleted, list in empty!\n");
    }

int main() {
    struct node *head = NULL;
    addNode(&head, 1);
    printf("Node created:\n");
    printf("Data %d, Link %d \n",head->data, head->link);

    delete(&head);

    if (head == NULL) {
        printf("Confirmed: head is NULL, list is emtpy!");
    }
    return 0;
}