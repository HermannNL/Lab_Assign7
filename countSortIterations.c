#include <stdlib.h>
#include <stdio.h>


void flip(int* a, int* b){
int tmp = *a;
*a = *b;
*b = tmp;
}


void bubbleSorting(int *array, int num){
    int flipCount;
    for (int i = 0; i < num - 1; i++)
    {
        flipCount = 0;
        for (int j = 0; j < num - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                flip(&array[j], &array[j + 1]);
                flipCount++;
            }
            
        }
        printf("Iteration #%d: %d\n", i + 1, flipCount);
        if (flipCount == 0)
            break;
    
        

    }
    
}

int main(int argc, char const *argv[])
{
    int num;
    int *array;

    printf("Enter Array Size: "); 
    scanf("%d", &num);

    array =(int *) malloc(num * sizeof(int));
    printf("Enter Array Elements: "); //will ask you to enter up to the size entered
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    bubbleSorting(array, num);

    free(array);
    return 0;
}
