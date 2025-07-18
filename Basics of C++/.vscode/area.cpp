#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const double pi=3.14;
    int r;
    cout<<"Enter radius of circle:";
    cin>>r;
    cout<<"Area of circle:"<<(pi*pow(r,2));
    return 0;
}