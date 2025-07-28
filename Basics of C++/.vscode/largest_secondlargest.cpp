#include <iostream>
using namespace std;
int getlargest(int arr[], int n)
{
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[res])
            res=i;
    
    }
    return res;
}

int getsecondlargest(int arr[], int n)
{
    int res=-1, largest=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1 || arr[i]>arr[res])
                res=i;
        }
    }
    return res;
}
int main()
{
    int arr[]={10, 15, 34, 21, 34, 56};
    int k=getlargest(arr,6);
    cout<<"Index of Largest Element: "<<k<<"\n";
    int l=getsecondlargest(arr,6);
    cout<<"Index of Second Largest Element: "<<l;
}