#include <stdio.h>
#define max 54
int queue[max];
int front = -1;
int rear = -1;
void enqueue(int n)
{
    if((rear + 1) % max == front)
        printf("Queue full");
    else
    {
        if(front == -1)
            front = 0;

        rear = (rear + 1) % max;
        queue[rear] = n;
    }
}
void dequeue()
{
    if(front == -1)
        printf("Queue is empty");
    else
    {
        printf("Removed element: %d", queue[front]);

        if(front == rear)
            front = rear = -1;
        else
            front = (front + 1) % max;
    }
}
void peek()
{
    if(front == -1)
        printf("Queue empty");
    else
        printf("Front element: %d", queue[front]);
}
void display()
{
    int i;
    if(front == -1)
        printf("Queue empty");
    else
    {
        i = front;
        while(i != rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % max;
        }
        printf("%d", queue[rear]);
    }
}
int main()
{
    int choice, n;
    while(1)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter element: ");
                scanf("%d", &n);
                enqueue(n);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                return 0;
        }
    }
}