#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)malloc(5 * sizeof(int));
    printf("Enter array elements: ");
    for(int i = 0;i < 5;i++)
    {
        scanf("%d", (arr + i));
    }
    
    arr = realloc(arr, 10 * sizeof(int));
    for(int i = 5;i < 10;i++)
    {
        scanf("%d", (arr + i));
    }
    printf("Array elements are: ");
    for(int i = 0;i < 10;i++)
    {
        printf("%d ", *(arr + i));
    }
    
    free(arr);
    //printf("\narr[1] = %d\n", arr[1]);
    return 0;
}

