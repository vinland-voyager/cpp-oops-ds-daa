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

