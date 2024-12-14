/*
    Parameter Differences
    - order
    - number
    - types
*/
#include <iostream>

using namespace std;

int max(int a, int b);
double max(double a, double b);
string_view max(string_view a, string_view b);

int main()
{
    int int_val1{41};
    int int_val2{29};

    double double_val1{47.2};
    double double_val2{55.01};

    string_view first{"Hello"};
    string_view second{"World"};

    cout << "Integer Overload Called " << max(int_val1, int_val2) << endl;
    cout << "Double Overload Called " << max(double_val1, double_val2) << endl;
    cout << "String View Overload Called " << max(first, second) << endl;

    return 0;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

double max(double a, double b)
{
    return (a > b) ? a : b;
}

string_view max(string_view a, string_view b)
{
    return (a > b) ? a : b;
}