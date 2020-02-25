#include <iostream>

using namespace std;

double power(double base, int exp);

int main()
{
    cout<<"GitHub Test"<<endl;
    
    power(10, 2);
    power(5.4, 3);
    power(10.3, 1);
    power(10.0, 0);

    return 0;
}
//--
double power(double base, int exp)
{
    double result = 1;
    for(int i = 0;i < exp;i++)
    {
        result = result * base;
    }

    cout<<result<<endl;

	return result;
}
