#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    cout << "Enter your name: " << endl;
    cin >> name; // cin like input in python
    cout << "Hello " << name << endl;

    int num1, num2;
    cout << "Enter first num 01: " << endl;
    cin >> num1;
    cout << "Enter first num 02: " << endl;
    cin >> num2;
    cout << "Answer: " << num1 + num2 << endl;

    return 0;
}