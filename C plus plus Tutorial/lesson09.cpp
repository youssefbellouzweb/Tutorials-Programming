#include <iostream>
#include <string>
using namespace std;

int main() {
    int numberGrid[2][3] = {{4, 8, 15}, {4, 8, 15}};

    numberGrid[0][1] = 90;
    cout << numberGrid[0][0] << endl;
    cout << numberGrid[0][1] << endl;
    return 0;
}