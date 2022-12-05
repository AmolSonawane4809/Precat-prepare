#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct  node *next;
}node_t;

node_t *create_node(int data);

int main(void)
{
    node_t *newnode = create_node(10);

    printf("data = %d\n", newnode->data);

    free(newnode);

    return 0;
}

node_t *create_node(int data)
{
    node_t *newnode = (node_t *)malloc(sizeof(node_t));

    newnode->data = data;
    newnode->next = NULL;

    return newnode;
}