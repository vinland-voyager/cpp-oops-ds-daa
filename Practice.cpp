/* Pointers, References and Constants -------------------------------

// const, const pointers
#include <iostream>
using namespace std;

int main() {
    const int a = 5;
    int b = 10;
    // a pointer ac to a constant integer -> Value can't be changed but pointer can be shifted to another address.
    const int* ptr = &a;
    // a constant pointer ace to an integer -> Value can be changed but pointer can NOT be shifted to another address.
    int* const ptrconst = &b;
    // a constant pointer acee to a constant integer -> Neither value nor the pointer address can be changed.
    const int* const cptrc = &b;
    *ptr = 11; // Value can't be changed for 'a'
    ptr = &b; // Address can be changed for ptr
    *ptr = 12; // Value still can't be changed, even though ptr now points to b
    *ptrconst = 110; // Value can be changed for 'b' via ptrconst
    ptrconst = &a; // Address can't be changed for ptrconst
    cptrc = &b; // Address can't be changed for cptrc
    *cptrc = 19; // Neither can value
    return 0;
}

// Multi-relations (Pointer to pointer & multi-level derefencing)
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* p = &a;
    int** pp =&p;
    int*** ppp = &pp;
    cout << a << endl
    << p << '\t' << &p << '\t' << *p << endl
    << pp << '\t' << &pp << '\t' << *pp << '\t' << **pp << endl
    << ppp << '\t' << &ppp << '\t' << *ppp << '\t' << **ppp << '\t' << ***ppp << endl;
    return 0;
}

// Dangling Reference
#include <iostream>
using namespace std;

int& getNumber();

int main() {
    int y;
    y = getNumber();
    cout << sizeof(int) << endl <<sizeof(double);
    return 0;
}

int& getNumber() {
    int xyy = 4000;
    return xyy;
}

// Basics of references
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int &r = a;
    cout << a << '\t' << r << endl;
    a = 9;
    cout << a << '\t' << r << endl;
    r = 7;
    cout << a << '\t' << r << endl;
    int b = 100;
    int &r1 = b;
    cout << a << '\t' << r << '\t' << b << endl;
    cout << &a << '\t' << &r << '\t' << &b << endl;
    return 0;
}

// nullptr with macro
#include <iostream>
using namespace std;
#define NULL nullptr

int main() {
    int * p1 {nullptr}, p2 {10}, p3 {0}, * p4 {&p2}, * p5 {NULL}, *p6 {NULL};
    cout << p4 << endl; // Will print the address of entity p2.
    cout << *p4 << endl; // Will print the value stored at variable p2.
    *p4 = 100; // changes the value of p2 to 10.
    cout << p4 << endl; // It will still print the same address.
    cout << *p4 << endl; // It will still print the value stored at p2 but with the updated value.
    return 0;
}
*/

/* Uniform Initialization -------------------------------

#include <iostream>
using namespace std;

class objX{ // Useless Class only for demonstration of Most Vexing Parse
public:
    objX(int a) {
        int b = a;
    };
};

int a;
int b {}; // Uniform
int c = 3;
int d {3}; // Uniform
int arrA[10];
int arrB[10] = {1,2,3};
int arrC[10] {1,2}; // Uniform

objX obj1(1); // How is it different than a function prototype?
objX obj2{1}; // This clearly is.

*/