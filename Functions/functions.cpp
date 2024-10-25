#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string name, int age) {
    cout << "Hello " << name << " you are " << age << endl;
}

int main() {
    string myName = "Jinyoung";
    int myAge = 24;

    sayHi(myName, myAge);
    sayHi("Ton", 34);
    sayHi("Steve", 19);

    return 0;
}