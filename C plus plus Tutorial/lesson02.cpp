#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "youssef";
    char testGrade = 'A';
    // جميع هذا الارقام تحتمل موجب وسالب
    short age = 26;
    int number = 999;
    long numberphone = 92192131301298231;
    long long numberseril = 92192131301298231;

    float gpa = 2.5f;
    double price = 234.77;
    long double money = 9821983271.77;

    // أم هذا تحتمل فقط موجب
    unsigned int age1 = 26;

    bool isTall;
    isTall = true;

    name = "Youssef Bellouz";

    cout << "Your name is " << name << endl;

    // const int BIRTH_YEAR = 1947;
    // or the same thing
    // int const BIRTH_YEAR = 1947;

    return 0;
}