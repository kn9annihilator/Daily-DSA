#include <iostream>
using namespace std;
int getlargest(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=true;

        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                flag=false;
                break;
            }
    }
    if(flag==true)
        return i;
}
return -1;
}
int main()
{
    int arr[]={1,5,7,8,13,24};
    cout<<getlargest(arr,6);
    return -1;
}