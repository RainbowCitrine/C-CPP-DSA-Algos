#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
    int temp = 0; 

    temp = *a; 
    *a = *b; 
    *b = temp; 
}
void SelectionSort(int arr[], const int SIZE)
{
    int min = 0; 
    for(int i = 0; i < SIZE; ++i)
    {  
        min = i; 
        for(int j = i + 1; j < SIZE; ++j)
        {
            if(arr[j] < arr[min])
                min = j; 
        }
        if(min != i)
            swap(&arr[min], &arr[i]); 
    }
}
int main()
{
    const int SIZE = 10; 
    int* arr = (int *)malloc(sizeof(int)* SIZE); 

    for(int i = 0; i < SIZE; ++i)
        scanf("%d", &arr[i]); 
    
    printf("Before Selection Sort: "); 
    for(int i = 0; i < SIZE; ++i)
        printf("%d " "", arr[i]);

    printf("\n");

    SelectionSort(arr, SIZE); 
    printf("After Selection Sort: "); 
    for(int i = 0; i < SIZE; ++i)
        printf("%d " "", arr[i]); 
}