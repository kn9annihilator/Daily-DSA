#include <iostream>
using namespace std;

void printnumbers(int n)
{
    if (n == 0)
        return;
    else {
        printnumbers(n - 1);
        cout << n << "  ";
    }
}

int main()
{
    int n = 4;
    printnumbers(n);
    return 0;
}
