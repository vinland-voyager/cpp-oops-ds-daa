/* Pointers -------------------------------

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