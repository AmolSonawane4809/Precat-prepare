#include<stdio.h>

#define SIZE 5

struct cir_queue
{
    int arr[SIZE];
    int rear;
    int front;
};

void init_queue(struct cir_queue *q);
void enqueue(struct cir_queue *q, int data);
void dequeue(struct cir_queue *q);
int peek(struct cir_queue *q);
int is_empty(struct cir_queue *q);
int is_full(struct cir_queue *q);

int main(void)
{
    struct cir_queue q;
    int ch;

    init_queue(&q);

    do
    {
        printf("0. Exit\n1. Enqueue\n2. Dequeue\n3. Peek\n");
        printf("Enter your choice  :");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            // enqueue
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
            {
                printf("Removed element = %d\n", peek(&q));
                dequeue(&q);
            }
            break;

        case 3:
            // peek
            if(is_empty(&q))
                printf("Queue is empty\n");
            else
                printf("Peeked element = %d\n", peek(&q));
            break;
        }
    } while (ch != 0);
    

    return 0;
}

void init_queue(struct cir_queue *q)
{
    q->front = -1;
    q->rear = -1;
}

void enqueue(struct cir_queue *q, int data)
{
    // increment rear
    q->rear = (q->rear + 1) % SIZE;
    // add data at rear index
    q->arr[q->rear] = data;
}
void dequeue(struct cir_queue *q)
{
    // increment front
    q->front = (q->front + 1) % SIZE;
    if(q->front == q->rear)
        q->front = q->rear = -1;
}
int peek(struct cir_queue *q)
{
    int i = (q->front + 1) % SIZE;
    return q->arr[i];
    //return q->arr[(q->front + 1) % SIZE];
}
int is_empty(struct cir_queue *q)
{
    return q->rear == q->front && q->rear == -1;
}
int is_full(struct cir_queue *q)
{
    return (q->rear == SIZE -1 && q->front == -1) || (q->rear == q->front && q->rear != -1);
}