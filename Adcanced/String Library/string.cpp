#include <iostream>
#include <string>

using namespace std;

int main() {
    string full_name; // Empty string
    string planet {"Earth. Where the sky is blue"}; // Initialize with string iteral
    string prefered_planet{planet};
    string message {"Hello there", 5}; // contains "Hello"
    string weird_message(4, 'e'); // contains "eeee"
    string hello_world{"Hello World!"};
    string world{hello_world, 6, 6}; // contains "there"

    cout << full_name << endl;
    cout << planet << endl;
    cout << prefered_planet << endl;
    cout << message << endl;
    cout << weird_message << endl;
    cout << hello_world << endl;
    cout << world << endl;

    return 0;
}