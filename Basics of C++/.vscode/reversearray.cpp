#include <iostream>
using namespace std;

void reversearray(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

int main()
{
    int arr[] = {3, 5, 6, 89, 23, 100};
    int n = sizeof(arr) / sizeof(arr[0]); // Safe calculation

    reversearray(arr, n);

    cout << "Reversed Array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
}
