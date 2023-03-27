#include <iostream>
#include <string>
using namespace std;
int main() {
        //----WRITE YOUR CODE BELOW THIS LINE----
        cout << "What is your name?" << endl;
            string name;
            cin >> name;

        cout << "How old are you?" << endl;
            int age;
            cin >> age;

        cout << "How much do you make? " << endl;
            double hourlyWage { 23.50 };
            cin >> hourlyWage;

        //----WRITE YOUR CODE ABOVE THIS LINE----
        //----DO NOT MODIFY THE CODE BELOW THIS LINE----

        cout << name << " " << age << " " << hourlyWage;
    return 0;
}
