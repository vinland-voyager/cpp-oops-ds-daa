/* From here: https://codeforwin.org/c-programming/functions-programming-exercises-and-solutions-in-c */

/* Exercise 1: program to find cube of any number using function.

#include <iostream>
using namespace std;

int findcube (int n) {
    return n*n*n;
}

int main () {
    int num, cube = 0;
    cin >> num;
    cube = findcube(num);
    cout << cube;
    return 0;
}
*/

/* Exercise 2: program to find diameter, circumference and area of circle using functions.

#define PI 3.14
#include <iostream>
using namespace std;

double diameter(double radius) {
    return radius * 2;
}
double circumference(double radius) {
    return 2*PI*radius;
}
double area(double radius) {
    return PI*radius*radius;
}

int main() {
    double radius;
    cin >> radius;
    cout << diameter(radius) << endl << circumference(radius) << endl << area(radius);
    return 0;
}
*/

/* Exercise 3: program to find maximum and minimum between two numbers using functions.

#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}
int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int num1, num2;
    cin >> num1; cin >> num2;
    cout << max(num1, num2) << endl << min(num1, num2);
    return 0;
}
*/

/* Exercise 4: program to find power of any number using recursion.

#include <iostream>
using namespace std;

int findPower(int n, int p) {
    if (p == 0) return 1;
    return n * findPower(n, p-1);
}

int main() {
    int num, p;
    cin >> num; cin >> p;
    cout << findPower(num, p);
    return 0;
}
*/

/* Exercise 5: program to generate nth Fibonacci term using recursion.

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 1) return 1;
    if (n == 2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}
*/

/* Exercise 6: program to find sum of array elements using recursion.

#include <iostream>
using std::cout, std::cin, std::endl;

int calcSum(int arr[], int start, int size) {
    if (size == 0) return 0;
    if (start == size - 1) return arr[start];
    return (arr[start] + calcSum(arr, start+1, size));
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << calcSum(arr, 0, size);
    return 0;
}
*/

/* Exercise 7: program to find maximum and minimum element in an array using recursion

#include <iostream>
using std::cout, std::cin, std::endl;

int findMin(int arr[], int start, int size) {
    if (size == 0) return 0;
    if (size == 1) return arr[start];
    if (start == size - 1) return arr[start];
    int minX = findMin(arr, start + 1, size);
    if (arr[start] < minX) return arr[start];
    return minX;
}

int findMax(int arr[], int start, int size) {
    if (size == 0) return 0;
    if (size == 1) return arr[start];
    if (start == size - 1) return arr[start];
    int maxX = findMax(arr, start + 1, size);
    if (arr[start] > maxX) return arr[start];
    return maxX;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int max{0}, min{0};
    cout << findMax(arr, 0, n) << endl << findMin(arr, 0, n) << endl;
}
*/

/* Exercise 8:

















