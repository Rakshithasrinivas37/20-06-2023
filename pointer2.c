#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    printf("Array elements are: ");
    for(int i = 0;i < 5;i++)
    {
        printf("%d ", *(ptr + i)); //Array name acts as pointer and it holds the address of first array element
    }

    return 0;
}

