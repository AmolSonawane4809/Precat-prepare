#include<stdio.h>

#define SIZE 5

struct queue{
    int arr[SIZE];
    int rear;
    int front;
};

void init_queue(struct queue *q);
void enqueue(struct queue *q, int data);
void dequeue(struct queue *q);
int peek(struct queue *q);
int is_empty(struct queue *q);
int is_full(struct queue *q);

int main(void)
{
    struct queue q;
    int ch;

    init_queue(&q);

    do
    {
        printf("0. Exit\n1. Enqueue\n2. Dequeue\n3. Peek\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            //enqueue
            if(is_full(&q))
                printf("Queue is full\n");
            else
            {
                int data;
                printf("Enter data : ");
                scanf("%d", &data);
                enqueue(&q, data);
            }
            break;
        
        case 2:
            // dequeue
            if(is_empty(&q))
                printf("Queue is empty\n");
            else
                dequeue(&q);
            break;

        case 3:
            // peek
            if(is_empty(&q))
                printf("Queue is empty\n");
            else
                printf("peeked ele = %d\n", peek(&q));
            break;
        }
    } while (ch != 0);

    return 0;
}

void init_queue(struct queue *q)
{
    q->front = -1;
    q->rear = -1;
}

void enqueue(struct queue *q, int data)
{
    //1. increment rear
    q->rear++;
    //2. add data at rear index
    q->arr[q->rear] = data;
}
void dequeue(struct queue *q)
{
    //1. incrment front
    q->front++;
}
int peek(struct queue *q)
{
    //1. return value of front+1 index
    return q->arr[q->front + 1];
}
int is_empty(struct queue *q)
{
    return q->front == q->rear;
}
int is_full(struct queue *q)
{
    return q->rear == SIZE - 1;
}