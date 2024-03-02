#include <stdio.h>

struct node
{
    int value;
    struct node *next;
};

// 02/28 exit ticket
void printLinkedList(struct node *head)
{
    if (head->next != NULL)
    {
        printf("%d->", head->value);
        printLinkedList(head->next);
    }
    else
    {
        printf("%d", head->value);
    }
}

int main(int argc, char *argv[])
{
    struct node *head = NULL;

    head = malloc(sizeof(struct node));
    head->value = 1;
    head->next = NULL;

    struct node *endingNode = malloc(sizeof(struct node));
    endingNode->value = 2;
    endingNode->next = NULL;
    head->next = endingNode;

    struct node *startingNode = malloc(sizeof(struct node));
    startingNode->value = 0;
    startingNode->next = head;

    printLinkedList(startingNode);

    while(startingNode != NULL)
    {
        struct node *temp = startingNode;
        startingNode = startingNode->next;
        free(temp);
    }
}