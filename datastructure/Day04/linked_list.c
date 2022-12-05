#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node_t;

struct node *head = NULL;

node_t *create_node(int data);
int is_empty(void);
void add_node_first(int data);
void add_node_last(int data);
void add_node_position(int data, int pos);
void delete_node_first(void);
void delete_node_last(void);
void display_list(void);

int main(void)
{
    add_node_first(10);
    add_node_first(20);
    add_node_first(30);
    add_node_first(40);
    add_node_last(50);
    add_node_last(60);
    add_node_position(70, 8);
    delete_node_first();
    delete_node_last();
    //30 20 10 50 60

    display_list();

    return 0;
}

node_t *create_node(int data)
{
    node_t *newnode = (node_t *)malloc(sizeof(node_t));

    newnode->data = data;
    newnode->next = NULL;

    return newnode;
}

int is_empty(void)
{
    return head == NULL;
}

void add_node_first(int data)
{  
    //0. create node with given data
    node_t *newnode = create_node(data);
    //1. if list is empty
    if(is_empty())
    {
	    //a. add newnode into head
        head = newnode;
    }
    else//2. if list is not empty
    {
	    //a. add head into newnode next
        newnode->next = head;
	    //b. add newnode into head
        head = newnode;
    }
}

void display_list(void)
{
    //1. if list is empty
    if(is_empty())
	    //a. print msg as list is empty
        printf("List is emmpty\n");
    else //2. if list is not empty
    {
	    //a. start at head
        node_t *trav = head;
        //d. repeat step b and c till trav != NULL
        printf("List : ");
        while(trav != NULL)
        {
	        //b. print data of that node
            printf("%-4d", trav->data);
	        //c. go on next node
            trav = trav->next;
        }
    }
}

void add_node_last(int data)
{
    //0. create node with given data
    node_t *newnode = create_node(data);
    //1. if list is empty
    if(is_empty())
	    //a. add newnode into head
        head = newnode;
    else //2. if list is not empty
    {
	    //a. traverse till last node
        node_t *trav = head;
        while(trav->next != NULL)
            trav = trav->next;
	    //b. add newnode into next of last node
        trav->next = newnode;
    }
}

void add_node_position(int data, int pos)
{
    //0. create node with given data
    node_t *newnode = create_node(data);
    //1. if list is empty
    if(is_empty())
	    //a. add newnode into head
        head = newnode;
    else if(pos <= 1)
    {
        free(newnode);
        add_node_first(data);
    }
    else //2. if list is not empty
    {
        int i = 1;
        node_t *trav = head;
        //a. traverse till pos -1 node
        while(i != pos -1 && trav->next != NULL)
        {
            trav = trav->next;
            i++;
        }
	    //b. add pos node into newnode
        newnode->next = trav->next;
	    //c. add newnode into pos-1 node
        trav->next = newnode;
    }
}

void delete_node_first(void)
{
    //1. if list is empty
    if(is_empty())
	    //print msg
        printf("List is empty\n");
    //2. if list has only one node
    else if(head->next == NULL)
    {
	    // delete head node only
        free(head);
        head = NULL;
    }
    else //3. if list has multiple nodes
	{
        //a. take backup of first node
        node_t *temp = head;
	    //b. add second node into head
        head = temp->next;
	    //c. delete backuped node 
            free(temp);
    }
}
void delete_node_last(void)
{
    //1. if list is empty
    if(is_empty())
	    //print msg
        printf("List is empty\n");
    //2. if list has one node
    else if(head->next == NULL)
	{
        //delete head node only
        free(head);
        head = NULL;
    }
    //3. if list has multiple nodes
    else
    {
	    //a. traverse till second last node
        node_t *trav = head;
        while(trav->next->next != NULL)
            trav = trav->next;
	    //b. delete last node
        free(trav->next);
	    //c. add NULL into next of second last node
        trav->next = NULL;
    }
}