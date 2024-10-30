#include <iostream>

using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;

        Student(string aName, string aMajor, double aGpa) {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors() {
            if(gpa >= 3.5) {
                return true;
            }
            return false;
        }
};

int main() {
    Student student1("Jim", "Buisness", 2.4);
    Student student2("Pam", "Art", 4.0);

    cout << student1.hasHonors(); // Print out '0' which means false, whereas '1' means true

    return 0;
}