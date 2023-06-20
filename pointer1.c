#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;
    
    int **ptr1 = &ptr;
    
    printf("&ptr = %p, ptr1 = %p\n", &ptr, ptr1);
    printf("&a = %p, ptr = %p, *ptr1 = %p\n", &a, ptr, *ptr1);
    printf("a = %d, *ptr = %d, **ptr1 = %d\n", a, *ptr, **ptr1);
    
    return 0;
}

