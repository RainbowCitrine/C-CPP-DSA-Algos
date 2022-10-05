/*
    Author: Noah Rainbow
    Date: 10/4/2022
    Title: Bubble Sort Pointer Manipulation in C  
*/
#include <stdio.h> 
#include <stdlib.h>

void PtrSwap(int* a, int* b)
{
    if(*a > *b)
    {
        int temp = *a; 
        *a = *b; 
        *b = temp; 
    }
}

void BubbleSort(int* ptr, const unsigned int SIZE)
{
    for(int i = 0; i < SIZE; ++i)
        for(int j = i + 1; j < SIZE; ++j)
            PtrSwap(ptr + i, ptr + j);    
}

int main(void)
{
    const unsigned int SIZE = 10; 
    int* arr =(int *)malloc(sizeof(int) * SIZE); 

    for(int i = 0; i < SIZE; ++i)
        scanf("%d", &arr[i]); 

    printf("Values Before Bubble Sort: "); 
    for(int i = 0; i < SIZE; ++i)
        printf("%d " "", arr[i]); 
    
    printf("\n"); 
    BubbleSort(arr, SIZE); 
    printf("Values After Bubble Sort: "); 
    for(int i = 0; i < SIZE; ++i)
        printf("%d" " ", arr[i]); 
}