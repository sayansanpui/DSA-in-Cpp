// Bubble Sort

#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    { // Outer loop runs for n-1 passes
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        { // Inner loop compares adjacent elements
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]); // Swap if elements are in wrong order
                swapped = true;
            }
        }

        // If no swaps occurred in this pass, the array is already sorted
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    bubbleSort(arr, n);

    cout << "\nSorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
