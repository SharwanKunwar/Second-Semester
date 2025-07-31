#include <stdio.h>
#include <stdlib.h>

// Author: Sharwan jung kunwar
// Purpose: Example and use of realloc

int main()
{

    int *ptr;
    int size;

    printf("Enter the size of array: ");
    scanf("%d",&size);


    ptr = (int *)malloc(size * sizeof(int));

    printf("Enter %d numbers \n",size);
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



    //////////// realloc part

        printf("Enter the new size of array : ");
        scanf("%d",&size);


    ptr = (int*) realloc(ptr, size*sizeof(int));

    printf("Enter %d numbers \n",size);
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

    free(ptr);

    printf("Memmory allocation is clear now work other things \n bye");

    return 0;
}