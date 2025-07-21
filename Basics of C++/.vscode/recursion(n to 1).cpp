#include <iostream>
using namespace std;

void printnumbers(int n)
{
    if(n==0)
        return;
    else
    cout<<n<<"  ";
    printnumbers(n-1);
}
int main()
{
    int n=4;
    printnumbers(n);
    return 0;
}