#include <iostream>
#include <string>
using namespace std;

int main() {

    int num = 10;

    // &num → يعطينا عنوان المتغير num في الذاكرة
    cout << &num << endl;

    // تعريف مؤشر (Pointer) من نوع int
    // pNum سيخزن عنوان متغير من نوع int
    int *pNum = &num;

    // pNum → يطبع العنوان المخزن (عنوان num)
    cout << pNum << endl;

    // *pNum → الوصول إلى القيمة الموجودة داخل ذلك العنوان (Dereferencing)
    // يعني سيطبع قيمة num وهي 10
    cout << *pNum << endl;

    return 0;
}