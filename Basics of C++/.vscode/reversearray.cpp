#include <iostream>
using namespace std;
void reversearray(int arr[], int n)
{
    int low=0, high=n-1;
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
int main()
{
    int arr[]={3, 5, 6, 89, 23, 100};
    reversearray(arr, 6);
    cout<<"Reversed Array: \n";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
        cout<<"\n";
    }
}