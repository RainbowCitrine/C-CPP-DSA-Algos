#include <iostream>

void swap(int *a, int *b)
{
    if (*a > *b)
    {
        int t = *a;
        *a = *b;
        *b = t;
    }
}
void bubblesort(int *ptr, int SIZE)
{
    for (int i = 0; i < SIZE - 1; ++i)
    {
        for (int j = i + 1; j < SIZE; ++j)
        {
            swap(ptr + i, ptr + j);
        }
    }
}

int main()
{
    const int size = 10;
    int *arr = new int[size];

    std::cout << "Please enter a sequence of numbers: ";
    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }

    std::cout << "Before Bubble Sort: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "After Bubble Sort: ";
    bubblesort(arr, size);
    for (int i = 0; i < size; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}