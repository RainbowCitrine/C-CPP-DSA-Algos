#include <iostream>

void BubbleSort(int arr[], const int SIZE)
{
    int temp = 0;

    for (int i = 0; i <= SIZE; ++i)
    {
        for (int j = i + 1; j < SIZE; ++j)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    const int SIZE = 10;
    int arr[SIZE];

    std::cout << "Please enter a sequence of random numbers: ";
    for (int i = 0; i < SIZE; ++i)
        arr[i] = rand() % 10 + 1;
    std::cout << "Before Bubble Sort: ";
    for (int i = 0; i < SIZE; ++i)
        std::cout << arr[i] << " ";

    std::cout << std::endl;
    BubbleSort(arr, SIZE);

    std::cout << "After Bubble Sort: ";
    for (int i = 0; i < SIZE; ++i)
        std::cout << arr[i] << " ";
}