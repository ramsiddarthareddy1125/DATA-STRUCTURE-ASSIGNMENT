#include <stdio.h>
#define max 5
int queue[max];
int front = -1;
int rear = -1;
void enqueue(int n)
{
    if(rear == max - 1)
        printf("Queue full");
    else
    {
        if(front == -1)
            front = 0;
        rear++;
        queue[rear] = n;
    }
}
void dequeue()
{
    if(front == -1 || front > rear)
        printf("Queue is empty");
    else
    {
        printf("Printed document %d", queue[front]);
        front++;
    }
}
void display()
{
    int i;
    if(front == -1 || front > rear)
        printf("Queue empty");
    else
    {
        printf("Pending documents: ");
        for(i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
}
int main()
{
    int choice, n;
    while(1)
    {
        printf("\n1.Add\n2.Print document\n3.Display\n4.Exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter document number: ");
                scanf("%d", &n);
                enqueue(n);
                break;
            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;
        }
    }
}