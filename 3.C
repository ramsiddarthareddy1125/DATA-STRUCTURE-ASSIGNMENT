#include <stdio.h>
int main()
{
    int arr[50], n, i, j, next;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        next = -1;
        for(j = i + 1; j < n; j++)
        {
            if(arr[j] > arr[i])
            {
                next = arr[j];
                break;
            }
        }
        printf("%d -> %d\n", arr[i], next);
    }
    return 0;
}