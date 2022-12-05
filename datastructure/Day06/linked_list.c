#include<stdio.h>

typedef struct node{
    int data;
    struct node *next;
}node_t;

void traverse1(node_t *trav)
{
    //node_t *trav = head;
    while (trav != NULL)
    {
        printf("%-4d", trav->data);
        trav = trav->next;
    }
    
}

void traverse2(node_t *trav)    // forward
{
    if(trav == NULL)
        return;
    printf("%-4d", trav->data);
    traverse2(trav->next);
}

void traverse3(node_t *trav)    // reverse
{
    if(trav == NULL)
        return;
    traverse2(trav->next);
    printf("%-4d", trav->data);
}

void traverse4(node_t *trav)    // ulternate forward
{
    if(trav == NULL)
        return;
    printf("%-4d", trav->data);
    traverse2(trav->next->next);
}

void traverse3(node_t *trav)    // ulternate reverse
{
    if(trav == NULL)
        return;
    traverse2(trav->next->next);
    printf("%-4d", trav->data);
}

int main(void)
{
    node_t *head;
    //10 20 30 40 50

    traverse1(head);
    traverse2(head);
    traverse3(head);
    return 0;
}