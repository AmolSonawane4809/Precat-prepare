#include<stdio.h>

#define SIZE 5

typedef enum boolean{
    FALSE, TRUE
}bool_t;

struct stack{
    int arr[SIZE];
    int top;
};

// stack1[]
// top1
//stack2
// top2
//stack3
//top3




void push(struct stack *, int);
void pop(struct stack *);
int peek(struct stack *);
bool_t is_empty(struct stack *);
bool_t is_full(struct stack *);

int main(void)
{
    struct stack s;
    
    int choice;
    int data;
    s.top = -1;

    do
    {
        printf("0. Exit\n1. Push\n2. pop\n3. Peek\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            //push
            
            if(is_full(&s))
                printf("stack is full\n");
            else
            {
                printf("Enter data : ");
                scanf("%d", &data);
                push(&s, data);
            }
            break;
        case 2:
            //pop
            if(is_empty(&s))
                printf("Stack is empty\n");
            else
                pop(&s);
            break;
        case 3:
            //peek
            if(is_empty(&s))
                printf("Stack is empty\n");
            else
                printf("Top element = %d\n", peek(&s));
            break;
        }
    } while (choice != 0);
    

    return 0;
}

void push(struct stack *s, int data)
{
    //1. increament top
    s->top++;
    //2. add data at top index
    s->arr[s->top] = data;
}
void pop(struct stack *s)
{
    //1. Decrement top
    s->top--;
}
int peek(struct stack *s)
{
    //1. return topmost value of stack
    return s->arr[s->top];
}
bool_t is_empty(struct stack *s)
{
    if(s->top == -1)
        return TRUE;
    else
        return FALSE;

}
bool_t is_full(struct stack *s)
{
    return s->top == SIZE - 1 ? TRUE : FALSE;
}