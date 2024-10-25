#include <iostream>

using namespace std;

double cube(double num) {
    return num * num * num;
}

int main() {
    double answer = cube(5.0);
    cout << answer << endl;
    cout << cube(4.0);

    return 0;
}