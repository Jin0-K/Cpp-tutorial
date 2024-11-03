#include <iostream>

using namespace std;

int main()
{
    // Capture everything by value
    int c{42};
    auto func1 = [=]()
    {
        cout << "Inner value: " << c << endl;
    };

    for (size_t i{}; i < 5; i++)
    {
        cout << "Outer value: " << c << endl;
        func1();
        c++;
    }

    cout << endl;
    // Capture everything by reference
    auto func2 = [&]()
    {
        cout << "Inner value: " << c << endl;
    };

    for (size_t i{}; i < 5; i++)
    {
        cout << "Outer value: " << c << endl;
        func2();
        c++;
    }

    return 0;
}