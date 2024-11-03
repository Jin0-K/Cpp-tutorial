/*
    a mechanism to set up anonymous function

    [capture list] (parameters) ->return type {
        // Function body
    }
*/

#include <iostream>

using namespace std;

int main()
{
    auto func = []()
    {
        cout << "Hello World" << endl;
    };
    func();

    // Declare a lambda function and call it directly
    []()
    {
        cout << "Called directly" << endl;
    }();

    // Lambda function that takes parameteres
    [](double a, double b)
    {
        cout << "a + b = " << a + b << endl;
    }(10.5, 5.0);

    auto addDouble = [](double a, double b)
    {
        cout << "a + b = " << a + b << endl;
    };
    addDouble(10, 20);
    addDouble(2.9, 19.2);

    // Lambda function that returns something
    auto result = [](double a, double b)
    {
        return a + b;
    }(10, 20);
    cout << "result: " << result << endl;
    cout << "result: " << [](double a, double b)
    {
        return a + b;
    }(10, 60)
         << endl;

    auto func1 = [](double a, double b)
    {
        return a + b;
    };
    auto result1 = func1(23, 7);
    cout << "result1: " << result1 << endl;
    cout << "Direct call: " << func1(5.2, 2.5) << endl;

    // Lambda function that explicitly specify the return type
    auto func2 = [](double a, double b) -> int
    {
        return a + b;
    };

    auto result2 = func2(6.9, 3.5);
    cout << "sizeof(result2): " << sizeof(result2) << endl; // 4

    cout << "Done!" << endl;

    return 0;
}