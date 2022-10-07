#include <iostream>

void SelectionSort(int arr[], const int SIZE)
{
    int min = 0;
    int temp = 0;
    for (int i = 0; i < SIZE; ++i)
    {
        min = i;
        for (int j = i + 1; j < SIZE; ++j)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
int main()
{
    const int SIZE = 10;
    int arr[SIZE] = {1, 5, 6, 2, 8, 9, 3, 10, 4, 7};

    std::cout << "Before Selection Sort: ";
    for (int i = 0; i < SIZE; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    SelectionSort(arr, SIZE);
    std::cout << "After Selection Sort: ";
    for (int i = 0; i < SIZE; ++i)
        std::cout << arr[i] << " ";
}