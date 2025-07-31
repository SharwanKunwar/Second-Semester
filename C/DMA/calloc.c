#include <stdio.h>
#include <stdlib.h>

// Author: Sharwan jung kunwar
// Purpose: Example and use of calloc

int main()
{

    int *ptr;
    int size;

    printf("Enter the size of array: ");
    scanf("%d",&size);


    ptr = (int *)calloc(size, sizeof(int));

    printf("Enter 3 numbers \n");
    for (int i = 0; i < size; i++)
    {
        printf("number %d : ", i + 1);
        scanf("%d", &ptr[i]);
    }

    printf("The stored value in array is below:\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d : %d\n ", i + 1, ptr[i]);
    }

    return 0;
}