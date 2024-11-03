#include <iostream>

using namespace std;

int main()
{
    // Capture lists
    double a{10};
    double b{20};

    // Capturing by value
    auto func1 = [a, b]()
    {
        cout << "a + b = " << a + b << endl;
    };

    // Capturing by reference
    auto func2 = [&a, &b]()
    {
        cout << "a + b = " << a + b << endl;
    };

    for (size_t i{}; i < 5; i++)
    {
        cout << "by value: ";
        func1();
        cout << "by reference: ";
        func2();
        b += 10;
    }

    return 0;
}