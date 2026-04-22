#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool isStudent = false;
    bool isSmart = false;

    if (isStudent && isSmart)
    {
        cout << "You are a student" << endl;
    }
    else if (isStudent && !isSmart)
    {
        cout << "You are not a smart student" << endl;
    }
    else
    {
        cout << "You are not a student and not a smart" << endl;
    }

    return 0;
}