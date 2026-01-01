// Practicing Binary Operators
#define SIZEINT sizeof(int)

#include <iostream>
using namespace std;

void printBinary(int n) {
    for (int i = (8*sizeof(n)); i >= 0; i--) {
        std::cout << ((n >> i) & 1);
    }
}
/* Exercise 1: Define a print function that prints any token in its binary form.
#include <iostream>
using namespace std;

void printBinary(int n) {
    for (int i = (8*sizeof(n)); i >= 0; i--) {
        cout << ((n >> i) & 1);
    }
}

int main() {
    printBinary(910108);
}
*/

/* Exercise 2: program to check Least Significant Bit (LSB) of a number is set or not
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if ((num & 1) == 1) cout << "LSB is set";
    else cout << "LSB is unset";
    return 0;
}
*/

/* Exercise 3: program to check Most Significant Bit (MSB) of a number is set or not
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if ((num << (sizeof(num) - 1) & 1) == 1) cout << "MSB is set";
    else cout << "MSB is unset";
    return 0;
}
*/

/* Exercise 4: program to get nth bit of a number
#include <iostream>
using namespace std;

int main() {
    int num, n;
    cin >> num; cin >> n;
    printBinary(num);
    if (((num >> n) & 1) == 1) cout << "nth position is set";
    else cout << "nth position is unset";
    return 0;
}
*/

/* Exercise 5: program to set nth bit of a number
#include <iostream>
using namespace std;

int main() {
    int num, n, change=0;
    cin >> num; cin >> n;
    change = change | 1;
    change = change << n;
    num = num | change;
    cout << num;
    return 0;
}
*/

/* Exercise 6: program to clear nth bit of a number
#include <iostream>
using namespace std;

int main() {
    int num, n, change=0;
    cin >> num;
    cin >> n;
    change = change | 1;
    change = change << n;
    num = num ^ change;
    cout << num;
    return 0;
}
*/

/* Exercise 7: program to toggle or invert nth bit of a number
int main() {
    int num, n, change=0;
    cin >> num;
    cin >> n;
    change = change | 1;
    change = change << n;
    num = num ^ change;
    cout << num;
    return 0;
}
*/

/* Exercise 8: program to get highest order set bit of a number

int main() {
    int num, count = (8*SIZEINT-1);
    cin >> num;
    for (int i = 1; i < (8*SIZEINT); i++) {
        if (((num >> (8*sizeof(num)-i)) & 1) == 1) break;
        else count--;
    }
    cout << count;
}
*/

/* Exercise 9: program to get lowest order or first set bit of a number

int main() {
    int num, count = 0;
    cin >> num;
    if (num == 0) cout << "Number is 0. No significant bit found";
    else if ((num & 1) != 1) {
        for (int i = 1; i < (8 * SIZEINT - 1); i++) {
            if (((num >> i) & 1) == 1) {
                count ++; break;
            }
            else count++;
        }
    }
    cout << endl << count;
    return 0;
}
*/

/* Exercise 10: program to count trailing zeros in a binary number
 * e.g. 10001000 | Here, there are 3 trailing zeroes, i.e., until the first set bit, i.e., position of the first set bit.
int main() {
    int num, count = 0;
    cin >> num;
    if (num == 0) cout << "Number is 0. No significant bit found";
    else if ((num & 1) != 1) {
        for (int i = 1; i < (8 * SIZEINT - 1); i++) {
            if (((num >> i) & 1) == 1) {
                count ++; break;
            }
            else count++;
        }
    }
    cout << endl << count;
    return 0;
}
*/

/* Exercise 11: program to count leading zeros in a binary number
 * position of highest significant bit

int main() {
    int num, count = (8 * SIZEINT);
    cin >> num;
    for (int i = 1; i < ((8 * SIZEINT)-1); i++) {
        if (((num >> (8 * SIZEINT)-i) & 1) == 1) break;
        else count--;
    }
    cout << (8 * SIZEINT)-count;
    return 0;
}
*/

/* Exercise 12: program to flip all bits of a binary number

int main() {
    int num;
    cin >> num;
    num = ~num;
    cout << num;
    return 0;
}
*/

/* Exercise 13: program to count zeros and ones in a binary number
int main() {
    int num, ones = 0, zeroes = 0;
    cin >> num;
    for (int i = 0; i < 8 * SIZEINT; i++) {
        if (((num >> i) & 1) == 1) ones++;
        else zeroes++;
    }
    cout << ones << endl << zeroes;
    return 0;
}
*/

















