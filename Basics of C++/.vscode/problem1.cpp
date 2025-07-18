#include <iostream>
using namespace std;
int main()
{
    int salary=95000;

    cout<<"Total Salary:"<<salary<<"\n"
        <<"Sales Tax:"<<(0.04*salary)<<"\n"
        <<"County Tax:"<<(0.02*salary)<<"\n";
    
    cout<<"Salary Remaining:"<<(salary-(0.02*salary)-(0.04*salary));
}