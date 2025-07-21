#include <iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    else
    return n*fact(n-1);   

}

int main()
{
    int p;
    cout<<"Enter Number"<<endl;
    cin>>p;

    int result=fact(p);
    cout << "Factorial of " << p << " is " << result;5

    
}