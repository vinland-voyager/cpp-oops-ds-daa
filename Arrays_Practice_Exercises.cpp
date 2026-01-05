/* Based on old C-style arrays
 * From: https://codeforwin.org/c-programming/array-programming-exercises-and
*/

/* Exercise 1: program to read and print elements of an array

#include <iostream>
using std::cout, std::cin, std::endl;

int main() {
    int n;
    cout << "Enter the number of elements you want: ";
    cin >> n;
    int arr[10];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) cout << arr[i] << endl;
    return 0;
}
*/

/* Exercise 2: program to print all negative elements in array

#include <iostream>
using std::cout, std::cin, std::endl;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) cout << arr[i] << endl;
    }
    return 0;
}
*/

/* Exercise 3: program to find sum of array elements using recursion.

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

/* Exercise 4: program to find maximum and minimum element in an array using loops

#include <iostream>
using std::cout, std::cin, std::endl;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int max {0}, min {0};
    for (int i = 0; i < n; i++) cin >> arr[i];
    if (n < 2) max = min = arr[0];
    else {
        for (int i = 0; i < n; i++) {
            if (arr[i] > max) max = arr[i];
            else if (arr[i] < min) min = arr[i];
        }
    }
    cout << max << endl << min;
    return 0;
}
*/

/* Exercise 5: program to find maximum and minimum element in an array using recursion

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

/* Exercise 6: program to find second largest element in an array.

#include <iostream>
using std::cout, std::cin, std::endl;

int main() {
    int max1{0}, max2{0};
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1) max2 = arr[i];
    }
    cout << max2;
    return 0;
}
*/

/* Exercise 7: program to copy all elements from an array to another array.

#include <iostream>
using std::cout, std::cin, std::endl;

int main() {
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++) cin >> arr1[i];
    for (int i = 0; i < n; i++) arr2[i] = arr1[i];
    return 0;
}
*/









