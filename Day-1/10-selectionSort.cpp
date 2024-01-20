// Selection Sort

#include <iostream>

using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {                     // Outer loop for passes
        int minIndex = i; // Assume first element is the minimum
        for (int j = i + 1; j < n; j++)
        { // Inner loop to find the actual minimum
            if (arr[j] < arr[minIndex])
            {
                minIndex = j; // Update minimum index if a smaller element is found
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    selectionSort(arr, n);

    cout << "\nSorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
